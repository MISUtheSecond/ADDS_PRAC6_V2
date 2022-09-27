#ifndef BITFLIP_H
#define BITFLIP_H

#include <iostream>
#include <string>
#include "Mutator.h"
#include "Individual.h"
using namespace std;

class BitFlip : public Mutator
{
    public:
        BitFlip();
        virtual Individual * mutate(Individual * Jai, int k);
        ~BitFlip();
}
#endif