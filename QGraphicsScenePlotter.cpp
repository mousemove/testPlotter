#include "QGraphicsScenePlotter.h"

QGraphicsScenePlotter::QGraphicsScenePlotter(QGraphicsScene *scene, int height, int width) : AbstractPlotter(height,width),_scene(scene)
{

}

void QGraphicsScenePlotter::draw()
{
    for(auto i: _figures)
    {
        QBrush brush = i->color() ==
                Color::black ? QBrush(Qt::black) :
                   i->color() ==   Color::white ? QBrush(Qt::white) :
                   i->color() ==   Color::red ? QBrush(Qt::red) :
                   i->color() ==   Color::green ? QBrush(Qt::green) :
                                                  QBrush(Qt::blue);

        for(auto f : i->points())
        {

            _scene->addRect(f.X(),f.Y(),1,1,QPen(brush.color()),brush);
        }
    }
}

void QGraphicsScenePlotter::clear()
{
    _scene->clear();
}
