#ifndef CIRCLE_H
#define CIRCLE_H
#include "AbstractFigure.h"

class Circle : public AbstractFigure
{
public:
    Circle(Point center,int radius, Color color = Color::black);
    Circle(const Circle& c);
};

#endif // CIRCLE_H
