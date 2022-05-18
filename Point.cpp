#include "Point.h"

int Point::X() const
{
    return _x;
}

void Point::setX(int value)
{
    _x = value;
}

int Point::Y() const
{
    return _y;
}

void Point::setY(int value)
{
    _y = value;
}

Point::Point()
{

}

Point::Point(int x, int y): _x(x),_y(y)
{

}
