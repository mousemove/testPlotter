#include "AbstractFigure.h"

vector<Point> AbstractFigure::points() const
{
    return _points;
}

Color AbstractFigure::color() const
{
    return _color;
}

void AbstractFigure::setColor(const Color &value)
{
    _color = value;
}

void AbstractFigure::move(int offsetX, int offsetY)
{
    for(auto &i : _points)
    {
        i.setX(i.X()+offsetX);
        i.setY(i.Y()+offsetY);
    }
}

AbstractFigure::~AbstractFigure()
{

}

AbstractFigure::AbstractFigure(Color c) : _color(c)
{

}
