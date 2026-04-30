#include <iostream>
using namespace std;
int main() {
    int x = 3;
    int y = x++;

    cout << "x: " << x << endl; // 4
    cout << "y: " << y << endl; // 3

    return 0;
}