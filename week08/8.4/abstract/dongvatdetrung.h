#ifndef DONGVATDETRUNG_H
#define DONGVATDETRUNG_H

#include "dongvat.h"

class DongVatDeTrung : public DongVat {
public:
    virtual DongVatDeTrung* deTrung() const = 0;
};

#endif
