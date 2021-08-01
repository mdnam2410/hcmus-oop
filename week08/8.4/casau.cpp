#include "casau.h"

CaSau::CaSau() {
    m_ten = "ca sau";
}

CaSau* CaSau::deTrung() const {
    return new CaSau;
}

void CaSau::boi() const {}