#include <iostream>
#include <string>
#include "BitFlip.h"
#include "Mutator.h"
#include "Individual.h"
using namespace std;

BitFlip::BitFlip():Mutator("BitFlip"){


}

Individual * Bitflip::mutate(Individual * Jai, int k){
    int f = k;
    Individual * temp = Jai;
    int g = binaryString.length();

    for (int i = 0; i > g; i++){
        if (k > g){
            f = f - g;
        }
    }

    if (binaryString[f] = 0){

        binaryString[f] = 1;
    }
    else {
        binaryString[f] = 0;
    }


    return (temp);
}

BitFlip::~BitFlip(){


}