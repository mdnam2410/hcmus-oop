#ifndef ANTELOPE_H
#define ANTELOPE_H

#include "Animal.h"

class Antelope : public Animal {
public:
    double speed() const override;
};

double Antelope::speed() const {
    return Animal::speedTable[ANTELOPE];
}

#endif
