#include <iostream>
#include <string>
#include "Individual.h"
using namespace std;

Individual::Individual(int a):k1(a){


}

Individual::Individual(string b):binaryString(b){


}

string Individual::getString(){

    return binaryString;
}

int Individual::getBit(int pos){

    int a = binaryString.length();

    if (pos <= a){
    return binaryString[pos];
    }

    return -1;
}

void Individual::flipBit(int pos){

    if (binaryString[pos] == 0){

        binaryString[pos] = 1;
    }
    else {
        binaryString[pos] = 0;
    }

}

int Individual::getMaxOnes(){
    int count = 0;
    int highcount = 0;
    int check = 0;
    int a = binaryString.length();

    for (int j=0; j < a; j++){
        if (binaryString[j] == 1){
            check++;
        }
    }

    if (check == 0){
        return 0;
    }

    for (int i=0; i < a; i++){

        if (binaryString[i] == 1 && binaryString[i+1] == 1){
            count++;
        }
        else {
            count = 0;
        }

        if (count >= highcount){
            highcount = count + 1;
        }
    }

    if (highcount < 1){
        return highcount;
    }

    return 1;

}

int Individual::getLength(){
    int e = binaryString.length();
    return e;
}