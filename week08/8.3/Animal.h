#ifndef ANIMAL_H
#define ANIMAL_H

class Animal {
protected:
    enum {LEOPARD, ANTELOPE, LION, DOG, HUMAN, HORSE};
    static const int numberOfAnimals;
    static const int speedTable[];

public:
    virtual double speed() const = 0;

    virtual ~Animal();
};

#endif
