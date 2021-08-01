#ifndef CHIMSE_H
#define CHIMSE_H

#include "abstract/chim.h"

class ChimSe final : public Chim {
private:
    std::string an() const override;
public:
    ChimSe();

    std::string anSauBo() const;

    ChimSe* deTrung() const override;
};

#endif
