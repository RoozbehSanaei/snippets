#include "Rectangle.h"

using namespace shapes;

Rectangle::Rectangle(int X0, int Y0, int X1, int Y1) {
    x0 = X0;
    y0 = Y0;
    x1 = X1;
    y1 = Y1;
}

Rectangle::~Rectangle() {}

int Rectangle::getLength() const {
    return (x1 - x0);
}

int Rectangle::getHeight() const {
    return (y1 - y0);
}

int Rectangle::getArea() const {
    return getLength() * getHeight();
}

void Rectangle::move(int dx, int dy) {
    x0 += dx;
    y0 += dy;
    x1 += dx;
    y1 += dy;
}


void shapes::hello(Rectangle rect) {
    printf("hello %d,%d,%d,%d\n", rect.x0,rect.x1,rect.y0,rect.y1);
}
