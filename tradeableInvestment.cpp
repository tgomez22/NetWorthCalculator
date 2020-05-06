//
// Created by magos-gomez on 5/5/20.
//

#include "tradeableInvestment.h"
tradeableInvestment::tradeableInvestment():Asset(){
    using namespace std;
    char investmentTypeTemp[SIZE];
    char investmentExchangeTemp[SIZE];
    char stockSymbolTemp[SIZE];
    cout<<"What type of investment is this? Stocks, futures, commodities, etc. : ";
    cin.get(investmentTypeTemp, SIZE, '\n');
    cin.ignore(100, '\n');
    investmentType += investmentTypeTemp;

    cout<<"What exchange is this traded on?: ";
    cin.get(investmentExchangeTemp, SIZE, '\n');
    cin.ignore(100, '\n');
    investmentExchange += investmentExchangeTemp;
    cout<<endl<<endl;

    cout<<"What is the stock symbol for the investment?: ";
    cin.get(stockSymbolTemp, SIZE, '\n');
    cin.ignore(100, '\n');
    stockSymbol += stockSymbolTemp;
    cout<<endl<<endl;

    cout<<"How many shares/units do you own?: ";
    cin>>shares;
    cin.ignore(100, '\n');
    cout<<endl<<endl;

    cout<<"What is the total worth of this investment in USD?: $";
    cin>>worth;
    cin.ignore(100, '\n');
    cout<<endl<<endl;


}

tradeableInvestment::tradeableInvestment(const tradeableInvestment & toCopy):Asset() {
    investmentType += toCopy.investmentType.data();
    investmentExchange += toCopy.investmentExchange.data();
    stockSymbol += toCopy.stockSymbol.data();
    worth = toCopy.worth;
    shares = toCopy.shares;
}

tradeableInvestment::~tradeableInvestment() {}