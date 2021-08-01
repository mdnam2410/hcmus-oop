#ifndef DONGVATDECON_H
#define DONGVATDECON_H

#include "dongvat.h"

class DongVatDeCon : public DongVat {
public:
    virtual DongVatDeCon* deCon() const = 0;
};

#endif
