//
// Created by magos-gomez on 5/5/20.
//

#ifndef NETWORTHCALCULATOR_NODE_H
#define NETWORTHCALCULATOR_NODE_H
#include "Asset.h"

class Node {
    public:
        Node();
        Node(Node & toCopy);
        ~Node();
        Node *& toNext();
    private:
        Asset * data;
        Node * next;
};


#endif //NETWORTHCALCULATOR_NODE_H
