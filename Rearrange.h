#ifndef REARRANGE_H
#define REARRANGE_H


#include <iostream>
#include <string>
#include "Mutator.h"
#include "Individual.h"
using namespace std;

class Rearrange : public Mutator
{
    public:
        Rearrange();
        virtual Individual * mutate(Individual * Jai, int k);
        ~Rearrange();
}
#endif