#ifndef HORSE_H
#define HORSE_H

#include "Animal.h"

class Horse : public Animal {
public:
    double speed() const override;
};

double Horse::speed() const {
    return Animal::speedTable[HORSE];
}

#endif
