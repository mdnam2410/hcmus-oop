#ifndef TACKE_H
#define TACKE_H

#include "abstract/bosat.h"

class TacKe : public BoSat {
public:
    TacKe();

    TacKe* deTrung() const override;
};

#endif
