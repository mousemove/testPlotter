#include <iostream>
#include "Line.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "ConsolePlotter.h"
using namespace std;

int main()
{
	
    //Объявляем фигуры
    Line l({12,12},{12,20});
    Circle c({50,10},8,Color::red);//Круг получается немного вытянутым по ввиду того что символы в консоли не квадратные
    Rectangle r({0,0},10,10);
    Triangle t({15,15},{25,25},{25,15},Color::green);

    //Для примера у каждогой фигуры есть функция move смещающая ее по вертикали и горизонтали , чуть сместим круг
    c.move(5,-2);
    //скопируем и тоже чуть сместим на 20 по высоте
    Circle c2 = c;
    c2.move(0,20);
    Triangle t2 = t;
    t2.move(0,20);
    //Создаем плоттер и добавляем в него фигуры
    ConsolePlotter p(40,100);
    p.addFigure(&l);
    p.addFigure(&c);
    p.addFigure(&t);
    p.addFigure(&r);
    p.addFigure(&c2);
    p.addFigure(&t2);
    //Рисуем
    p.draw();
    return 0;
}
