#include "daibang.h"

DaiBang::DaiBang() {
    m_ten = "dai bang";
}

std::string DaiBang::an() const {
    return "tap";
}

std::string DaiBang::anTap() const {
    return an();
}

DaiBang* DaiBang::deTrung() const {
    return new DaiBang;
}