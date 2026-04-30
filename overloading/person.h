#pragma once
#include <string>
using namespace std;

class Person {
public:
    Person();
    Person(string firstName, float newWeight, int newAge);
    ~Person();

    // Overload + operator (weight)
    float operator+(const Person& otherPerson);

    // Relational operators (first name)
    bool operator==(const Person& otherPerson);
    bool operator!=(const Person& otherPerson);

    // Relational operators (age)
    bool operator<(const Person& otherPerson);
    bool operator>(const Person& otherPerson);

    // Conversion operators
    operator int();       // age
    operator string();    // first name
    operator float();     // weight

private:
    float mWeight;
    string mFirstName;
    int mAge;
};