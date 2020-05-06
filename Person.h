//
// Created by magos-gomez on 5/5/20.
//
#include <string>
#include <iostream>
#ifndef NETWORTHCALCULATOR_PERSON_H
#define NETWORTHCALCULATOR_PERSON_H
const int SIZE = 50;
class Person {
    public:
        Person();
        Person(const Person & toCopy);
        ~Person();
        int compare(const Person & toCompare) const;


    private:
        std::string name;
};


#endif //NETWORTHCALCULATOR_PERSON_H
