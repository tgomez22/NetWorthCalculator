//
// Created by magos-gomez on 5/8/20.
//

#ifndef NETWORTHCALCULATOR_COMMERCIALRENTALPROPERTY_H
#define NETWORTHCALCULATOR_COMMERCIALRENTALPROPERTY_H
#include "RentalProperty.h"

class CommercialRentalProperty : public RentalProperty {
public:
    CommercialRentalProperty();
    CommercialRentalProperty(const CommercialRentalProperty & toCopy);
    ~CommercialRentalProperty();
private:
    std::string businessName;
    std::string businessType;
};


#endif //NETWORTHCALCULATOR_COMMERCIALRENTALPROPERTY_H
