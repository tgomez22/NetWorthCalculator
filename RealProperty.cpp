//
// Created by magos-gomez on 5/5/20.
//

#include "RealProperty.h"
RealProperty::RealProperty() :Asset(){
    using namespace std;
    char addressTemp[SIZE];
    char cityTemp[SIZE];
    char userResponse;
    char lenderTemp[SIZE];
    cout<<"What is the street address of the property?: ";
    cin.get(addressTemp, SIZE, '\n');
    cin.ignore(100, '\n');
    streetAddress += addressTemp;
    cout<<endl<<endl;

    cout<<"What city is the property located in?: ";
    cin.get(cityTemp, SIZE, '\n');
    cin.ignore(100, '\n');
    city += cityTemp;
    cout<<endl<<endl;

    cout<<"What is the zip code?: ";
    cin>>zipCode;
    cin.ignore(100, '\n');
    cout<<endl<<endl;


    cout<<"Is your property financed? Y or N:";
    cin>>userResponse;
    cin.ignore(100, '\n');
    userResponse = toupper(userResponse);
    cout<<endl<<endl;

    if(userResponse == 'Y')
    {
        paidOff = false;
        cout<<"Who is the mortgage lender?: ";
        cin.get(lenderTemp, SIZE, '\n');
        cin.ignore(100, '\n');
        mortgageLender += lenderTemp;
        cout<<endl<<endl;
    }

    cout<<"What is the worth of the property or its liability?: ";
    cin>>worth;
    cout<<endl<<endl;

}

RealProperty::RealProperty(const RealProperty & toCopy): Asset(toCopy){
    streetAddress += toCopy.streetAddress.data();
    zipCode = toCopy.zipCode;
    city += toCopy.city.data();

    if(toCopy.paidOff){
        paidOff = true;
        interestRate = toCopy.interestRate;
        mortgageLender += toCopy.mortgageLender.data();
    }

    else{
        paidOff = false;
    }

}

RealProperty::~RealProperty(){}