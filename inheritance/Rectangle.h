#pragma once
#include "Polygon.h"

class Rectangle : public Polygon {
public:
    Rectangle() {}
    Rectangle(int w, int h) { mWidth = w; mHeight = h; }
    int Area();
};