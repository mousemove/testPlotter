#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "AbstractFigure.h"
#include "Line.h"
class Rectangle : public AbstractFigure
{
private:
    Line * _lines[4] = {nullptr};
public:
    Rectangle(Point start, int height, int width, Color color = Color::black);
    Rectangle(const Rectangle & rectangle);
    virtual ~Rectangle();
    virtual void move(int offsetX,int offsetY) override;//функция для перемещения на X и Y
};

#endif // RECTANGLE_H
