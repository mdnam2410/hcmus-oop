#ifndef LION_H
#define LION_H

#include "Animal.h"

class Lion : public Animal {
public:
    double speed() const override;
};

double Lion::speed() const {
    return Animal::speedTable[LION];
}

#endif
