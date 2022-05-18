#include "Line.h"
//для построения используется алгоритм Алгоритм Брезенхэма, взят с https://en.wikipedia.org/wiki/Bresenham%27s_line_algorithm
Line::Line(Point start, Point finish, Color color) : AbstractFigure(color)
{
    vector<Point> result;
    int x1 = start.X();
    int y1 = start.Y();
    int x2 = finish.X();
    int y2 = finish.Y();
    const int deltaX = abs(x2 - x1);
    const int deltaY = abs(y2 - y1);
    const int signX = x1 < x2 ? 1 : -1;
    const int signY = y1 < y2 ? 1 : -1;
    int error = deltaX - deltaY;
    _points.push_back({x2, y2});
    while(x1 != x2 || y1 != y2)
    {
        _points.push_back({x1, y1});
        int error2 = error * 2;
        if(error2 > -deltaY)
        {
            error -= deltaY;
            x1 += signX;
        }
        if(error2 < deltaX)
        {
            error += deltaX;
            y1 += signY;
        }
    }

}

Line::Line(const Line &line)
{
_points = line.points();
}

Line::~Line()
{

}

