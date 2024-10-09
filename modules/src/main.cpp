#include <iostream>
#include "../include/rectangle.h"

using namespace std;
using namespace rectangle;

int main() {

    Rectangle* rectanglePtr = new Rectangle(30, 50);
    Rectangle rectangle = Rectangle(20, 60);

    rectangle.setHeight(10);
    rectangle.setWidth(20);
    rectangle.getArea();

    rectanglePtr->setHeight(10);
    rectanglePtr->setWidth(24);
    rectanglePtr->getArea();


    Rectangle r(2,6), s(4,8);
    Rectangle* p = &r;

    p->setHeight(10);

    if (rectanglePtr->getHeight() > rectangle.getHeight()) {
        cout << "Rectangle pointer height is greater than rectangle height" << endl;
    } else {
        cout << "Rectangle height is greater than rectangle pointer height" << endl;
    }

    delete rectanglePtr;


    

    return 0;
}