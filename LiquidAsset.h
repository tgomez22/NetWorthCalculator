//
// Created by magos-gomez on 5/5/20.
//

#ifndef NETWORTHCALCULATOR_LIQUIDASSET_H
#define NETWORTHCALCULATOR_LIQUIDASSET_H
#include "Asset.h"

class LiquidAsset : public Asset{

    public:
        LiquidAsset();
        ~LiquidAsset();

    private:
        std::string assetType;
        float worth;
};


#endif //NETWORTHCALCULATOR_LIQUIDASSET_H
