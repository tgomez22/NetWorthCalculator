//
// Created by magos-gomez on 5/5/20.
//

#ifndef NETWORTHCALCULATOR_TRADEABLEINVESTMENT_H
#define NETWORTHCALCULATOR_TRADEABLEINVESTMENT_H
#include "Asset.h"

class tradeableInvestment: public Asset {
    public:
        tradeableInvestment();
        tradeableInvestment(const tradeableInvestment & toCopy);
        ~tradeableInvestment();

    private:
        std::string investmentType;
        std::string investmentExchange;
        std::string stockSymbol;
        int shares;
        float worth;
};


#endif //NETWORTHCALCULATOR_TRADEABLEINVESTMENT_H
