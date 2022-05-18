#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "AbstractFigure.h"
#include "Line.h"

class Triangle : public AbstractFigure
{
private:
    Line * _lines[3] = {nullptr};
public:
    Triangle(Point p1,Point p2,Point p3,Color color = Color::black);
    Triangle(const Triangle & triangle);
virtual void move(int offsetX,int offsetY) override;//функция для перемещения на X и Y
   virtual ~Triangle();
};

#endif // TRIANGLE_H
