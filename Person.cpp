//
// Created by magos-gomez on 5/5/20.
//

#include "Person.h"
Person::Person(){
    using namespace std;
    char tempName[SIZE];
    cin.get(tempName, SIZE, '\n');
    cin.ignore(100, '\n');

    name += tempName;
}

Person::Person(const Person & toCopy){
    name += toCopy.name.data();
}

Person::~Person(){}

int Person::compare(const Person & toCompare)const{
    return name.compare(toCompare.name.data());
}
