//
// Created by spear on 4/14/2020.
//

#ifndef SORTING_DESCENDING_H
#define SORTING_DESCENDING_H

#include "Comparator.h"

class Descending: public Comparator<int> {

    virtual bool lessThan(int &x, int &y) override {
        if (x > y) return true;
    }

    bool equals(int &x, int &y) override {
        return x!=y;
    }

};

#endif //SORTING_DESCENDING_H
