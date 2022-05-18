#ifndef POINT_H
#define POINT_H


class Point
{
private:
    int _x = 0;
    int _y = 0;
public:
    Point();
    Point(int x,int y);
    int X() const;
    void setX(int value);
    int Y() const;
    void setY(int value);
};

#endif // POINT_H
