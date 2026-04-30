#include "Area.h"
#include <cmath>
#define PI 3.14159

float Area::calcSquare(shapes::Square s) {
    return s.getSide() * s.getSide();
}
float Area::calcTriangle(shapes::Triangle t) {
    return 0.5f * t.getBase() * t.getHeight();
}
float Area::calcCircle(shapes::Circle c) {
    return PI * c.getRadius() * c.getRadius();
}