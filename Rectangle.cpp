#include "Rectangle.h"
#include <iostream>
using namespace std;

Rectangle::Rectangle(){}        //default constructor
Rectangle::Rectangle(int newWidth, int newHeight):Polygon(newWidth, newHeight){}        //parameter constructor
int Rectangle::getArea() {          //calculates an area
    return width*height;
}
void Rectangle::draw() {
    for (int i=0;i<height;i++) {
        for (int j=0; j<width; j++) {
            cout<<"*";
        }
        cout<<endl;
    }
}


