#include <iostream>
#include <string>
using namespace std;
int main() {
    int* pInt = new int;
    string* pString = new string;

    cout << "Enter an integer: ";
    cin >> *pInt;

    cout << "Enter a string: ";
    cin.ignore();
    getline(cin, *pString);

    cout << "Integer: " << *pInt << endl;
    cout << "String: " << *pString << endl;

    delete pInt;
    delete pString;

    return 0;
}