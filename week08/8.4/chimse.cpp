#include "chimse.h"

ChimSe::ChimSe() {
    m_ten = "chim se";
}

std::string ChimSe::an() const {
    return "sau bo";
}

std::string ChimSe::anSauBo() const {
    return an();
}

ChimSe* ChimSe::deTrung() const {
    return new ChimSe;
}