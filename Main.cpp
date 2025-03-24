/*************************************************************************
** Author                : Nathan Philburn
** Program               : hw1, q2
** Date Created          : March 20, 2025
** Date Last Modified    : March 24, 2025
** Usage                 : No command line arguments
**
** Problem:
** Modify the Polygon class to include two pure virtual functions:
** - getArea() which returns an int.
** - draw() which returns void.
** Create two derived classes: Rectangle and Triangle.
** Override getArea() to calculate the area (width * height for Rectangle,
** (width * height)/2 for Triangle) and override draw() to display the shape
** using stars. Update main() to demonstrate the functionality of these classes.
*************************************************************************/
#include <iostream>
#include "Polygon.h"
#include "Rectangle.h"
#include "Triangle.h"
using namespace std;
int main() {
    Triangle triangle(14, 7);
    cout<<"Triangle area: "<<triangle.getArea()<<" stars."<<endl;
    cout<<"drawing:"<<endl;
    triangle.draw();

    Rectangle rectangle(10, 9);      //creates a rectangle object
    cout<<"\nRectangle area: "<<rectangle.getArea()<<" stars."<<endl;
    cout<<"Rectangle drawing:"<<endl;
    rectangle.draw();

    //Polygon polygon;       //Question 1: this causes a compiling error because Polygon is an abstract class which can't instantiate because it has incomplete implementations.

    //Polygon polygon2;     //Question 2: this causes a compiling error because although the Polygon class is no longer abstract, there is no definition for getArea, so the linker cannot work properly.
    return 0;
}