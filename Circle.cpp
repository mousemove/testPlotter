#include "Circle.h"

Circle::Circle(Point center, int radius, Color color)  : AbstractFigure(color)
{//не самый оптимальный алгоритм для круга малых размеров, но для тестового примера пойдет
    for (int i = 0; i < 360; i++) {
        double angle = i * M_PI / 180;
        int x = center.X() + radius * cos(angle);
        int y = center.Y() + radius * sin(angle);
        _points.push_back({x,y});
    }
}

Circle::Circle(const Circle &c)
{
    _points = c.points();
}


