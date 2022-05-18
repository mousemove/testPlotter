#ifndef ABSTRACTFIGURE_H
#define ABSTRACTFIGURE_H

#include <vector>
#include "Point.h"
#include "Color.h"
#include <cmath>
using namespace std;



class AbstractFigure
{
protected:
    Color _color;
    vector<Point> _points;
    AbstractFigure(Color c = Color::black);
public:
    vector<Point> points() const;
    Color color() const;
    void setColor(const Color &value);
    virtual void move(int offsetX,int offsetY);//функция для перемещения на X и Y
    ~AbstractFigure();
};

#endif // ABSTRACTFIGURE_H
