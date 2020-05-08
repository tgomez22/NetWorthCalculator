//
// Created by magos-gomez on 5/8/20.
//

#ifndef NETWORTHCALCULATOR_RESIDENTALRENTALPROPERTY_H
#define NETWORTHCALCULATOR_RESIDENTALRENTALPROPERTY_H
#include "RentalProperty.h"
const int UNITTYPES = 10;

class ResidentialRentalProperty : public RentalProperty {
    public:
        ResidentialRentalProperty();
        ResidentialRentalProperty(const ResidentialRentalProperty & toCopy);
        ~ResidentialRentalProperty();

    private:
        int UnitsOwned;
        int priceRangesOfUnits[UNITTYPES];
        int tenants;
};


#endif //NETWORTHCALCULATOR_RESIDENTALRENTALPROPERTY_H
