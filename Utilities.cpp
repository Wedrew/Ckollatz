//
// Created by Andrew Pagan on 6/26/17.
//
#include <iostream>
#include <cmath>

using namespace std;

int digitAmount(int num) {

    int length = 1;

    while (num /= 10) {

        length++;

    }

    return length;

}

bool isNumPrime(int colNum) {

    if (colNum%2 == 0 && colNum != 2) {

        return false;

    }

    for (int i = 3; i <= sqrt(colNum); i = i+2) {

        if (colNum%i == 0) {

            return false;

        }
    }

    return true;

}