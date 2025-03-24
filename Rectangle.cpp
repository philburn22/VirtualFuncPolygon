#include "Rectangle.h"
#include <iostream>
using namespace std;

Rectangle::Rectangle():Polygon(){}        //default constructor that calls polygons d.c.
Rectangle::Rectangle(int newWidth, int newHeight):Polygon(newWidth, newHeight){}        //parameter constructor
int Rectangle::getArea() {          //calculates an area
    return width*height;
}
void Rectangle::draw() {                    //draws the rectangle
    for (int i=0;i<height;i++) {
        for (int j=0; j<width; j++) {           //prints width of stars
            cout<<"*";
        }
        cout<<endl;
    }
}


