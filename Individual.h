#ifndef INDIVIDUAL_H
#define INDIVIDUAL_H

#include <iostream>
#include <string>
using namespace std;

class Individual{

    public:
    Individual(int a);
    Individual(string b);
    string getString();
    int getBit(int pos);
    void flipBit(int pos);
    int getMaxOnes();
    int getLength();

    private:
    string binaryString;
    int k1;
};
#endif