#ifndef BOSAT_H
#define BOSAT_H

#include "dongvatdetrung.h"

class BoSat : public DongVatDeTrung {
private:
    std::string an() const override;
public:

    std::string anTap() const;

    void bo() const;
};

#endif
