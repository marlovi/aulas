#ifndef CACHORRO_H
#define CACHORRO_H

#include "animal.h"
#include <iostream>
using namespace std;

class Cachorro : public Animal{
    public:
         void comer();
         void latir();
};
#endif