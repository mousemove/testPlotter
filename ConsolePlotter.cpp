#include "ConsolePlotter.h"

char ConsolePlotter::colorize(Color c)
{
    return c == Color::black ? '1' :
           c== Color::white ? '2' :
           c== Color::red ? '3' :
           c== Color::green ? '4':
           '5';

}

ConsolePlotter::ConsolePlotter(int height, int width):AbstractPlotter(height,width)
{

}

void ConsolePlotter::draw()
{



    for(auto i: _figures)
    {
        for(auto f : i->points())
        {
            points.push_back({f,i->color()});//формируем общий массив точек для сортировки
            //cout << f.X() << " " << f.Y() << endl;
        }
    }
    sort(points.begin(),points.end(),[=](pair<Point,Color> & p1,pair<Point,Color> & p2){return p1.first.Y() < p2.first.Y(); });//Сортируем все строчки по Y для формирования строк на вывод

    int i = 0;//счетчик строк
    int p = 0;//счетчик точек
    while(points.at(p).first.Y() < 0)
    {
        p++;//все что рисуется вне сцены не обрабатываем
    }

    while(i < _height)//все что рисуется вне сцены по Y тоже не обрабатываем
    {
        string s;
        s.resize(_width,' ');
        if (p < points.size()){

            if(points.at(p).first.Y() == i)
            {
                while((points.at(p).first.Y() == i))
                {
                    int x = points.at(p).first.X();
                    if (x >= 0 && x < _width )
                        //s[x] = '1';
                        s[x] = colorize(points.at(p).second);
                    p++;
                    if (p >= points.size()) break;
                }
            }
        }
        s+='\n';
        i++;
        cout << s;
    }

}

void ConsolePlotter::clear()
{
    points.clear();
    //todo очистка сцены в отличии от версии с QGraphicsScene в чистом консольном режиме пока не поддерживается
}
