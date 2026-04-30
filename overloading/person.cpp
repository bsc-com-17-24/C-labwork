#include "Person.h"

Person::Person() {
    mWeight = 0.0f;
    mFirstName = "";
    mAge = 0;
}

Person::Person(string firstName, float newWeight, int newAge) {
    mFirstName = firstName;
    mWeight = newWeight;
    mAge = newAge;
}

Person::~Person() {}

float Person::operator+(const Person& otherPerson) {
    return this->mWeight + otherPerson.mWeight;
}

bool Person::operator==(const Person& otherPerson) {
    return this->mFirstName == otherPerson.mFirstName;
}

bool Person::operator!=(const Person& otherPerson) {
    return this->mFirstName != otherPerson.mFirstName;
}

bool Person::operator<(const Person& otherPerson) {
    return this->mAge < otherPerson.mAge;
}

bool Person::operator>(const Person& otherPerson) {
    return this->mAge > otherPerson.mAge;
}

// Conversion operators
Person::operator int() { return mAge; }
Person::operator string() { return mFirstName; }
Person::operator float() { return mWeight; }