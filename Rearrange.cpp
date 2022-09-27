#include <iostream>
#include <string>
#include "Rearrange.h"
#include "Mutator.h"
#include "Individual.h"
using namespace std;

Rearrange::Rearrange():Mutator("Rearrange"){


}

Individual * Rearrange::mutate(Individual * Jai, int k){
    int m = Jai->getLength();
    string n[m] = {};

    for (int i = 0; i < k; i++){
        n[i] = binaryString[i];
        binaryString.erase(i,1);
    }

    binaryString = binaryString + n;

}

Rearrange::~Rearrange(){


}