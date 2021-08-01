#ifndef DONGVAT_H
#define DONGVAT_H

#include <string>

class DongVat {
protected:
    std::string m_ten;
    
    virtual std::string an() const = 0;

public:
    std::string ten() const;
};

#endif
