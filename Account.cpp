//
// Created by magos-gomez on 5/5/20.
//

#include "Account.h"
Account::Account() : Address(){
    netWorth = assetWorth = liability = 0.0;
    root = NULL;
}

Account::Account(const Account & toCopy) : Address(toCopy){
    netWorth = toCopy.netWorth;
    assetWorth = toCopy.assetWorth;
    liability = toCopy.liability;
    copyTree(root,toCopy.root);
}

bool copyTree(Node *& dest, Node * source){
    if(!source) return false;

    dest = new Node(source);
}