#ifndef CASAU_H
#define CASAU_H

#include "abstract/bosat.h"

class CaSau : public BoSat {
public:
    CaSau();

    CaSau* deTrung() const override;

    void boi() const;
};

#endif
