//
// Created by magos-gomez on 5/5/20.
//

#ifndef NETWORTHCALCULATOR_ACCOUNT_H
#define NETWORTHCALCULATOR_ACCOUNT_H
#include "Address.h"
#include "Node.h"

class Account : public Address {
    public:
        Account();
        Account(const Account & toCopy);
        ~Account();

    private:
        float netWorth;
        float assetWorth;
        float liability;
        Node * root;
};


#endif //NETWORTHCALCULATOR_ACCOUNT_H
