#include <iostream>
#include "Square.h"
#include "Triangle.h"
#include "Circle.h"
#include "area.h"
using namespace std;
using namespace shapes;

int main() {
    int choice;
    do {
        cout << "\nMenu:\n";
        cout << "1. Area of Square\n";
        cout << "2. Area of Triangle\n";
        cout << "3. Area of Circle\n";
        cout << "4. Quit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            float s;
            cout << "Enter side: ";
            cin >> s;
            Square sq(s);
            cout << "Area: " << Area::calcSquare(sq) << endl;
        }
        else if (choice == 2) {
            float b, h;
            cout << "Enter base: ";
            cin >> b;
            cout << "Enter height: ";
            cin >> h;
            Triangle tr(b, h);
            cout << "Area: " << Area::calcTriangle(tr) << endl;
        }
        else if (choice == 3) {
            float r;
            cout << "Enter radius: ";
            cin >> r;
            Circle c(r);
            cout << "Area: " << Area::calcCircle(c) << endl;
        }
    } while (choice != 4);

    return 0;
}