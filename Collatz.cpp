//
// Created by Andrew Pagan on 6/25/17.
//

#include <iostream>
#include <cmath>
#include "Collatz.h"
#include <iomanip>
#include "Utilities.cpp"

using namespace std;

Collatz::Collatz(unsigned long input) {

    colNum = input;
    PrintAllSteps(CalculateSteps(colNum));
    //PrintAllPrimeFactors(CalculatePrimeFactors(colNum));
    //PrintAllPrimeSteps(CalculatePrimeSteps(colNum));
    //PrintOrbitalSum(CalculateOrbitalSum(colNum));
    //PrintPathToOne(colNum);

}

Collatz::~Collatz() {

    //Nothingv

}

//Writes steps into vector, always called when class is created
vector<int> Collatz::CalculateSteps(int num) {

    vector<int> temp;

    for (int i = 1; i <= num; i++) {

        int counter = 0;
        int buff = i;

        while (buff > 1) {

            if (buff % 2 == 0) {

                buff = buff/2;
                counter++;

            } else {

                buff = (buff*3)+1;
                counter++;

            }
        }

        temp.push_back(counter);

    }

    return temp;

}

//Writes prime factors into 2D vector, always called when class is created
vector<vector<int>> Collatz::CalculatePrimeFactors(int num) {

    vector<vector<int>> temp;

    for (int i = 0; i < num; i++) {

        int buff = i+1;
        vector<int> myRow;

        while (buff%2 == 0) {

            myRow.push_back(2);
            buff = buff/2;

        }

        for (int i = 3; i <= sqrt(buff); i = i + 2) {

            while (buff%i == 0) {

                myRow.push_back(i);
                buff = buff/i;

            }
        }

        if (buff > 2) {

            myRow.push_back(buff);

        }

        temp.push_back(myRow);

    }

    return temp;

}

//Writes prime numbers are corresponding steps into 2D vector. 1st sub element is prime # and second element is steps taken
vector<vector<int>> Collatz::CalculatePrimeSteps(int num) {

    vector<vector<int>> tempPrime = CalculatePrimeFactors(num);
    vector<vector<int>> temp;
    vector<int> allStepsTemp = CalculateSteps(num);

    for (int i = 0; i < num; i++) {

        vector<int> myRow;

        if (tempPrime[i].size() == 1) {

            myRow.push_back(i + 1);
            myRow.push_back(allStepsTemp[i]);
            temp.push_back(myRow);

        }
    }

    return temp;

}

vector<int> Collatz::CalculateOrbitalSum(int num) {

    vector<int> temp;

    for (int i = 0; i < colNum; i++) {

        int buff = i+1;
        int sum = 1;

        while (buff > 1) {

            sum = sum + buff;

            if (buff % 2 == 0) {

                buff = buff / 2;

            } else {

                buff = (buff * 3) + 1;

            }
        }

        temp.push_back(sum);

    }

    return temp;

}



void Collatz::PrintAllSteps(vector<int> vect) {

    cout << "Printing all numbers:" << endl;

    for (int i = 0; i < vect.size(); i++) {

        cout << "Number " << setw(DigitAmount(colNum)) << i+1 << " took " << setw(DigitAmount(*std::max_element(vect.begin(), vect.end()))) << vect[i] << " steps" << endl;

    }
}

void Collatz::PrintEvenSteps(vector<int> vect) {

    cout << "Printing all even numbers:" << endl;

    for (int i = 0; i < vect.size(); i++) {

        if (i%2 != 0) {

            cout << "Number " << setw(DigitAmount(colNum)) << i+1 << " took " << setw(DigitAmount(*std::max_element(vect.begin(), vect.end()))) << vect[i] << " steps" << endl;

        }
    }
}

void Collatz::PrintOddSteps(vector<int> vect) {

    cout << "Printing all odd numbers:" << endl;

    for (int i = 0; i < vect.size(); i++) {

        if (i%2 == 0) {

            cout << "Number " << setw(DigitAmount(colNum)) << i+1  << " took " << setw(DigitAmount(*std::max_element(vect.begin(), vect.end()))) << vect[i] << " steps" << endl;

        }
    }
}

void Collatz::PrintAllPrimeFactors(vector<vector<int>> vect) {

    for (int i = 0; i < vect.size(); i++) {

        cout << "Number " << setw(DigitAmount(colNum)) << i + 1 << " prime numbers are: ";

        for (int t = 0; t < vect[i].size(); t++) {

            cout << vect[i][t] << " ";

        }

        cout << endl;

    }
}

void Collatz::PrintOrbitalSum(vector<int> vect) {

    for (int i = 0; i < vect.size(); i++) {

        cout << "Number " << i+1 << " has an orbital size of " << vect[i] << endl;

    }
}


void Collatz::PrintAllPrimeSteps(std::vector<std::vector<int>> vect) {

    for (int i = 0; i < vect.size(); i++) {

        //Probably a better way to format this text using max_element with 2d vectors somehow
        cout << "Prime number " << vect[i][0] << " took " << vect[i][1] << " steps" << endl;

    }
}

void Collatz::PrintPathToOne(int num) {

    int counter = 0;
    int buff = num;

    while (buff > 1) {

        if (buff % 2 == 0) {

            cout << buff << endl;
            buff = buff/2;
            counter++;

        } else {

            cout << buff << endl;
            buff= (buff*3)+1;
            counter++;

        }
    }

    cout << "1" << endl;
    cout << "-------------------------------" << endl;
    cout << num  << " took " << counter << " steps to to one";

}