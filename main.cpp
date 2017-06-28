#include <iostream>
#include <stdio.h>
#include <stdlib.h>


#include "Collatz.h"


int main() {

    Collatz collatz(1,100);
    vector<Point> temp;
    temp = collatz.orbitalSum;

    for (int i = 0; i < temp.size(); i++) {

        cout << "Number " << temp[i].returnX() << " had an orbital sum of " << temp[i].returnY() << endl;


    }

}