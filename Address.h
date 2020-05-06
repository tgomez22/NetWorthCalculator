//
// Created by magos-gomez on 5/5/20.
//

#ifndef NETWORTHCALCULATOR_ADDRESS_H
#define NETWORTHCALCULATOR_ADDRESS_H


#include "Person.h"


class Address: public Person {
    public:
        Address();
        Address(const Address & toCopy);
        ~Address();
        void displayAddress()const;
        //bool changeAddress();

    private:
        std::string streetAddress;
        int zipCode;
        std::string city;

};


#endif //NETWORTHCALCULATOR_ADDRESS_H
