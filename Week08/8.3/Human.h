#ifndef HUMAN_H
#define HUMAN_H

#include "Animal.h"

class Human : public Animal {
public:
    double speed() const override;
};

double Human::speed() const {
    return Animal::speedTable[HUMAN];
}

#endif
