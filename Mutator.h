#ifndef MUTATOR_H
#define MUTATOR_H

#include <iostream>
#include <string>
#include "Individual.h"
using namespace std;

class Mutator
{
    public:
    Mutator();
    virtual Individual * mutate(Individual * Jai, int k)=0;
    ~Mutator();

}
#endif