#include "Triangle.h"

Triangle::Triangle(Point p1, Point p2, Point p3, Color color) :AbstractFigure(color)
{
    _lines[0] = new Line(p1,p2,color);
    _lines[1] = new Line(p2,p3,color);
    _lines[2] = new Line(p3,p1,color);
    for(int i=0;i<3;i++)
    {
        for(auto & i : _lines[i]->points())
            _points.push_back(i);
    }
}

Triangle::Triangle(const Triangle &triangle)
{
    _lines[0] =triangle._lines[0];
    _lines[1] =triangle._lines[1];
    _lines[2] =triangle._lines[2];
    _points = triangle._points;
}

void Triangle::move(int offsetX, int offsetY)
{
    for(int i=0;i<3;i++)
    {
        _lines[i]->move(offsetX,offsetY);
    }
    AbstractFigure::move(offsetX,offsetY);
}

Triangle::~Triangle()
{
    for(int i=0;i<3;i++)
        delete _lines[i];
}
