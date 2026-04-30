#pragma once
#include "Polygon.h"

class Triangle : public Polygon {
public:
    Triangle() {}
    Triangle(int w, int h) { mWidth = w; mHeight = h; }
    int Area();
};