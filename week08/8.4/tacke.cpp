#include "tacke.h"

TacKe::TacKe() {
    m_ten = "tac ke";
}

TacKe* TacKe::deTrung() const {
    return new TacKe;
}