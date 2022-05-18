#include "AbstractPlotter.h"

AbstractPlotter::AbstractPlotter(int height, int width) : _height(height),_width(width)
{

}

vector<AbstractFigure *> & AbstractPlotter::figures()
{
    return _figures;
}

void AbstractPlotter::addFigure(AbstractFigure *figure)
{
    _figures.push_back(figure);
}
