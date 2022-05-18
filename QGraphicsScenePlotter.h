#ifndef QGRAPHICSSCENEPLOTTER_H
#define QGRAPHICSSCENEPLOTTER_H

#include "AbstractPlotter.h"
#include <QGraphicsScene>
#include <QDebug>
class QGraphicsScenePlotter : public AbstractPlotter
{
private:
    QGraphicsScene * _scene;
public:
    QGraphicsScenePlotter(QGraphicsScene * scene,int height = 100,int width = 100);
    virtual void draw() override;
    virtual void clear() override;
};

#endif // QGRAPHICSSCENEPLOTTER_H
