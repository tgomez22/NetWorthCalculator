//
// Created by magos-gomez on 5/8/20.
//

#ifndef NETWORTHCALCULATOR_RENTALPROPERTY_H
#define NETWORTHCALCULATOR_RENTALPROPERTY_H
#include "Asset.h"

class RentalProperty : public Asset {
    public:
        RentalProperty();
        RentalProperty(RentalProperty & toCopy);
        ~RentalProperty();
        float yearlyExpenses()const;
        void display()const;
    private:
        std::string streetAddress;
        int zipCode;
        std::string city;
        float propertyValue;
        float monthlyExpenses;
};


#endif //NETWORTHCALCULATOR_RENTALPROPERTY_H
