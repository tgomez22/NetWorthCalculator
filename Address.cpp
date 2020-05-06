//
// Created by magos-gomez on 5/5/20.
//

#include "Address.h"

Address::Address() : Person(){
    using namespace std;

    char strAddr[SIZE];
    char cityName[SIZE];

    cout<<"Please enter your street address: ";
    cin.get(strAddr, SIZE, '\n');
    cin.ignore(100, '\n');

    streetAddress += strAddr;
    cout<<endl<<endl;

    cout<<"What is the name of the city you live in?: ";
    cin.get(cityName, 100, '\n');
    cin.ignore(100, '\n');
    city += cityName;

    cout<<endl<<endl;
    cout<<"What is your zip code?: ";
    cin>>zipCode;
    cin.ignore(100, '\n');
}

Address::Address(const Address & toCopy): Person(toCopy){
    streetAddress += toCopy.streetAddress.data();
    zipCode = toCopy.zipCode;
    city += toCopy.city.data();
}

Address::~Address(){}

void Address::displayAddress() const{
    using namespace std;
    cout<<streetAddress.data()<<", "<< city.data() <<", "<< zipCode <<endl;
    return;
}
