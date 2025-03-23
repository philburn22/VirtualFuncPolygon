#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Polygon.h"

class Rectangle:public Polygon {
public:
    Rectangle();            //default constructor
    Rectangle(int newWidth, int newHeight);     //sets width and height
    virtual int getArea();      //over rides
    virtual void draw();
};
#endif //RECTANGLE_H
