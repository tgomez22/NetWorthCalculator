//
// Created by magos-gomez on 5/5/20.
//

#ifndef NETWORTHCALCULATOR_REALPROPERTY_H
#define NETWORTHCALCULATOR_REALPROPERTY_H
#include "Asset.h"
class RealProperty : public Asset{
    public:
        RealProperty();
        RealProperty(const RealProperty & toCopy);
        ~RealProperty();
    private:
        std::string streetAddress;
        int zipCode;
        std::string city;

        bool paidOff;
        float interestRate;
        std::string mortgageLender;

        float worth;

};


#endif //NETWORTHCALCULATOR_REALPROPERTY_H
