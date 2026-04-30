#include <iostream>
using namespace std;
int main() {
    int rows, cols;
    cout << "Enter rows (<=3): ";
    cin >> rows;
    cout << "Enter cols (<=3): ";
    cin >> cols;

    if (rows > 3 || cols > 3) {
        cout << "Error: dimensions must not exceed 3." << endl;
        return 1;
    }

    double** array = new double*[rows];
    for (int i = 0; i < rows; i++) {
        array[i] = new double[cols];
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Enter value for [" << i << "][" << j << "]: ";
            cin >> array[i][j];
        }
    }

    cout << "Array values:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < rows; i++) {
        delete[] array[i];
    }
    delete[] array;

    return 0;
}