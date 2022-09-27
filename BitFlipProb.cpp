#include <iostream>
#include <string>
#include "BitFlipProb.h"
#include "Mutator.h"
#include "Individual.h"
using namespace std;

BitFlipProb::BitFlipProb():Mutator("BitFlipProb"){


}

Individual * BitFlipProb::mutate(Individual * Jai, int k){

    double p = 0.1;

    for (int i = 0; i < Jai->getLength(); i++)

    bool val = (rand() % 1) < p;

    if (val == 1){
        if (binaryString[f] = 0){

            binaryString[f] = 1;
        }
        else {
            binaryString[f] = 0;
        }
}
}

BitFlipProb::~BitFlipProb(){


}