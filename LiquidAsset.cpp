//
// Created by magos-gomez on 5/5/20.
//

#include "LiquidAsset.h"
LiquidAsset::LiquidAsset():Asset(){
    using namespace std;
    char tempType[SIZE];

    cout<<"What kind of liquid asset is this? Cash, bonds, etc. (No Stocks): ";
    cin.get(tempType, SIZE, '\n');
    cin.ignore(100, '\n');
    assetType += tempType;

    cout<<"What is the worth in USD of the asset?: ";
    cin>>worth;
    cin.ignore(100,'\n');
    cout<<endl<<endl;
}

LiquidAsset::~LiquidAsset(){}
