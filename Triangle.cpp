#include "Triangle.h"
#include <iostream>
using namespace std;

Triangle::Triangle():Polygon() {}
Triangle::Triangle(int newWidth, int newHeight):Polygon(newWidth, newHeight){}  //parameter constructor

int Triangle::getArea() {       //calculate area
    return (width*height)/2;
}
void Triangle::draw() {
    int maxStars=2*height-1;
    for (int i=1;i<=height;i++) {           //# of stars in row i
        int stars=2*i-1;
        int spaces=(maxStars-stars)/2;      //centers the stars
        for (int s=0;s<spaces;s++) {           //blank leading spaces
            cout<<" ";
        }
        for (int j=0;j<stars; j++) {
            cout<<"*";
        }
        cout<<endl;
    }
}



