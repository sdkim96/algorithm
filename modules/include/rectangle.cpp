#include <iostream>
#include "rectangle.h"

using namespace rectangle;

Rectangle::Rectangle(int h, int w) {
    std::cout << "Rectangle created" << std::endl;

    if (h < 0) {
        std::cout << "Height cannot be negative" << std::endl;
        height = 0;
    } else {
        height = h;
    }

    if (w < 0) {
        std::cout << "Width cannot be negative" << std::endl;
        width = 0;
    } else {
        width = w;
    }
};

Rectangle::~Rectangle() {
    std::cout << "Rectangle destroyed" << std::endl;
};

int Rectangle::getHeight() {
    return height;
};

int Rectangle::getWidth() {
    return width;
};

int Rectangle::setHeight(int h) {
    if (h < 0) {
        std::cout << "Height cannot be negative" << std::endl;
        return -1;
    } else {
        height = h;
        return 0;
    }
}

int Rectangle::setWidth(int w) {
    if (w < 0) {
        std::cout << "Width cannot be negative" << std::endl;
        return -1;
    } else {
        width = w;
        return 0;
    }
}

int Rectangle::getArea() {
    return height * width;
}

bool Rectangle::operator==(const Rectangle& s) const {
    if (this == &s) return true;

    if (this->height == s.height && this->width == s.width) {
        return true;
    } else {
        return false;
    }
}

Rectangle Rectangle::operator+(const Rectangle& s) {

    int h = s.height + this->height;
    int w = s.width + this->width;

    this->setWidth(w);
    this->setHeight(h);

    return Rectangle(h, w);
}

Rectangle Rectangle::operator-(const Rectangle& s) {

    int h = this->height - s.height;
    int w = this->width - s.width;

    this->setWidth(w);
    this->setHeight(h);

    return Rectangle(h, w);
}