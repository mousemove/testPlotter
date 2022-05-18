#ifndef ABSTRACTPLOTTER_H
#define ABSTRACTPLOTTER_H
#include "AbstractFigure.h"
#include <vector>
class AbstractPlotter
{
protected:
    int _height;
    int _width;
    AbstractPlotter(int height = 100,int width = 100);//данные для обработки размера сцены, в реализации QScene к примеру можно опустить а в консольном нет
    vector<AbstractFigure *> _figures;
public:
    virtual void draw() = 0;
    virtual void clear() = 0;
    vector<AbstractFigure *> & figures();
    void addFigure(AbstractFigure * figure);
};

#endif // ABSTRACTPLOTTER_H
