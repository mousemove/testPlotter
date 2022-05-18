#include "Rectangle.h"

Rectangle::Rectangle(Point start, int height, int width, Color color) : AbstractFigure(color)
{
    _lines[0] = new Line(start,{start.X()+width,start.Y()},color);
    _lines[1] = new Line({start.X()+width,start.Y()},{start.X()+width,start.Y()+height},color);
    _lines[2] = new Line({start.X()+width,start.Y()+height},{start.X(),start.Y()+height},color);
    _lines[3] = new Line({start.X(),start.Y()+height},{start.X(),start.Y()},color);
    for(int i=0;i<4;i++)
    {
        for(auto & i : _lines[i]->points())
            _points.push_back(i);
    }

}

Rectangle::Rectangle(const Rectangle &rectangle)
{
    _lines[0] = rectangle._lines[0];
    _lines[1] = rectangle._lines[1];
    _lines[2] = rectangle._lines[2];
    _lines[3] = rectangle._lines[3];
    _points = rectangle._points;
}

Rectangle::~Rectangle()
{
    for(int i=0;i<4;i++)
        delete _lines[i];
}

void Rectangle::move(int offsetX, int offsetY)
{
    for(int i=0;i<4;i++)
    {
        _lines[i]->move(offsetX,offsetY);

    }
    AbstractFigure::move(offsetX,offsetY);
}

