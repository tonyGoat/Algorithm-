//
// Created by spear on 4/14/2020.
//

#ifndef SORTING_BYSTATE_H
#define SORTING_BYSTATE_H
#include "entity/MailingAddress.h"
#include "Comparator.h"


class ByState: public Comparator<MailingAddress> {

    bool lessThan(MailingAddress &x, MailingAddress &y) override {
        if (x.getState() < y.getState()) return true;
        if (x.getState() == y.getState() && x.getCity() < y.getCity()) return true;


        if (x.getState() == y.getState() && x.getCity() == y.getCity() && x.getZipCode() < y.getZipCode()) return true;
        if (x.getState() == y.getState() && x.getCity() == y.getCity() && x.getZipCode() == y.getZipCode() && x.getStreet() < y.getStreet() ) return true;
    }

    bool equals(MailingAddress &x, MailingAddress &y) override {
            if (x.getStreet() != y.getStreet()) return false;
            if (x.getCity() != y.getStreet()) return false;
            if (x.getState() != y.getState()) return false;
            return x.getZipCode() == y.getZipCode();
        }
};




#endif //SORTING_BYSTATE_H
