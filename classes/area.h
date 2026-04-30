#ifndef AREA_H
#define AREA_H
#include "Square.h"
#include "Triangle.h"
#include "Circle.h"

class Area {
public:
    static float calcSquare(shapes::Square s);
    static float calcTriangle(shapes::Triangle t);
    static float calcCircle(shapes::Circle c);
};
#endif