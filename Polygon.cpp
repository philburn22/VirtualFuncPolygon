#include "Polygon.h"

Polygon::Polygon():width(0), height(0){}
Polygon::Polygon(int newWidth, int newHeight):width(newWidth), height(newHeight){}      //parameterized constructor

void Polygon::setWidth(int newWidth){
    width = newWidth;
}

void Polygon::setHeight(int newHeight){
    height = newHeight;

}
