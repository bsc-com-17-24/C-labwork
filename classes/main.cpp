#include <iostream>
#include "Rectangle.h"
using namespace std;

int main() {
    float l, w;

    
    Rectangle rect1;
    cout << "Enter length for rect1: ";
    cin >> l;
    cout << "Enter width for rect1: ";
    cin >> w;
    rect1.setLength(l);
    rect1.setWidth(w);
    cout << "Area of rect1: " << rect1.getArea() << endl;

    
    cout << "Enter length for rect2: ";
    cin >> l;
    cout << "Enter width for rect2: ";
    cin >> w;
    Rectangle rect2(l, w);
    cout << "Area of rect2: " << rect2.getArea() << endl;

    return 0;
}