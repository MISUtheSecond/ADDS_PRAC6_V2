#ifndef BITFLIPPROB_H
#define BITFLIPPROB_H


#include <iostream>
#include <string>
#include "Mutator.h"
#include "Individual.h"
using namespace std;

class BitFlipProb : public Mutator
{
    public:
        BitFlipProb();
        virtual Individual * mutate(Individual * Jai, int k);
        ~BitFlipProb();


    private:
        double p;
}
#endif