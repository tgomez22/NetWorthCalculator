//
// Created by magos-gomez on 5/8/20.
//

#include "RentalProperty.h"

RentalProperty::RentalProperty() {
    using namespace std;
    char addressTemp [SIZE];
    char cityTemp[SIZE];

    cout<<"What is the street address of the new property?: ";
    cin.get(addressTemp, SIZE, '\n');
    cin.ignore(100, '\n');
    streetAddress += addressTemp;
    cout<<endl<<endl;

    cout<<"What city is the property in?: ";
    cin.get(cityTemp, SIZE, '\n');
    cin.ignore(100, '\n');
    city += cityTemp;
    cout<<endl<<endl;

    cout<<"What is the zip code?: ";
    cin>>zipCode;
    cout<<endl<<endl;

    cout<<"What is the total value of the land, any structures, and any assets on the property?: ";
    cin>>propertyValue;
    cin.ignore(100, '\n');
    cout<<endl<<endl;

    cout<<"What are the total expenses associated with the property?: ";
    cin>>monthlyExpenses;
    cin.ignore(100, '\n');
    cout<<endl<<endl;
}

RentalProperty::RentalProperty(RentalProperty &toCopy) {
    monthlyExpenses = toCopy.monthlyExpenses;
    propertyValue = toCopy.propertyValue;
    streetAddress += toCopy.streetAddress.data();
    zipCode = toCopy.zipCode;
    city += toCopy.city.data();
}

RentalProperty::~RentalProperty(){}

float RentalProperty::yearlyExpenses() const {
    return (monthlyExpenses * 12);
}

void RentalProperty::display()const{
    using namespace std;

    cout<<"The property at: "<<streetAddress.data()<<", "<<city.data()<<", "<<zipCode<<endl;
    cout<<"has a value of $"<<propertyValue<<endl;
    cout<<"The property's monthly expenses are $"<<monthlyExpenses<<endl;
    cout<<endl<<endl;
    return;
}