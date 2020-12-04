#ifndef LEOPARD_H
#define LEOPARD_H

#include "Animal.h"

class Leopard : public Animal {
public:
    double speed() const override;
};

double Leopard::speed() const {
    return Animal::speedTable[LEOPARD];
}

#endif
