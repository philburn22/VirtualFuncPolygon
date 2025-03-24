#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "Polygon.h"

class Triangle:public Polygon {
public:
    Triangle();         //default constructor
    Triangle(int newWidth, int newHeight);      //sets width and height
    virtual int getArea();          //get triangle area
    virtual void draw();
};
#endif //TRIANGLE_H
