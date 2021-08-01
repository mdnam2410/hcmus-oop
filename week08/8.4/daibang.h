#ifndef DAIBANG_H
#define DAIBANG_H

#include "abstract/chim.h"

class DaiBang : public Chim {
private:
    std::string an() const override;
public:
    DaiBang();

    std::string anTap() const;

    DaiBang* deTrung() const override;
};

#endif
