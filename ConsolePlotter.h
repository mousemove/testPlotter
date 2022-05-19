#ifndef CONSOLEPLOTTER_H
#define CONSOLEPLOTTER_H
#include "AbstractPlotter.h"
#include <iostream>
#include <algorithm>
#include <memory>
#include <cstring>
using namespace std;
class ConsolePlotter : public AbstractPlotter
{
private:
    char colorize(Color c);
public:
    ConsolePlotter(int height = 40,int width = 100);
    virtual void draw() override;
    virtual void clear() override;
};

#endif // CONSOLEPLOTTER_H
