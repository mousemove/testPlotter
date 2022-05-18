#ifndef LINE_H
#define LINE_H
#include "AbstractFigure.h"

class Line : public AbstractFigure
{
public:
    Line(Point start, Point finish, Color color = Color::black);
    Line(const Line & line);
    virtual ~Line();
};

#endif // LINE_H
