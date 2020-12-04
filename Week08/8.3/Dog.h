#ifndef DOG_H
#define DOG_H

#include "Animal.h"

class Dog : public Animal {
public:
    double speed() const override;
};

double Dog::speed() const {
    return Animal::speedTable[DOG];
}

#endif
