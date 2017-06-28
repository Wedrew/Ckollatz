//
// Created by Andrew Pagan on 6/25/17.
//

#include <iostream>
#include <cmath>
#include <iomanip>
#include "Collatz.h"
#include "Utilities.cpp"

using namespace std;

Collatz::Collatz(long min, long max) {

    colMin = min;
    colMax = max;
    steps = calculateSteps(colMin, colMax);
    primeFactors = calculatePrimeFactors(colMin, colMax);
    primeSteps = calculatePrimeSteps(colMin, colMax);
    orbitalSum = calculateOrbitalSums(colMin, colMax);

}

Collatz::~Collatz() {

    //Nothingv

}

//Writes steps into vector of Point objects, always called when class is created
vector<Point> Collatz::calculateSteps(long min, long max) {

    vector<Point> temp;

    for (long i = min; i <= max; i++) {

        int counter = 0;
        long buff = i;
        Point point;

        while (buff > 1) {

            if (buff % 2 == 0) {

                buff = buff/2;
                counter++;

            } else {

                buff = (buff*3)+1;
                counter++;

            }

            point.update(i, counter);

        }

        if (i == 1) {

            point.update(1, 1);

        }

        temp.push_back(point);

    }

    maxStep = calculateMaxElement(temp);
    minStep = calculateMinElement(temp);
    return temp;

}

//Writes prime factors into 2D vector, always called when class is created
vector<vector<long>> Collatz::calculatePrimeFactors(long min, long max) {

    vector<vector<long>> temp;

    for (long i = min; i <= max; i++) {

        long buff = i;
        vector<long> myRow;

        while (buff%2 == 0) {

            myRow.push_back(2);
            buff = buff/2;

        }

        for (long t = 3; t <= sqrt(buff); t = t + 2) {

            while (buff%t == 0) {

                myRow.push_back(t);
                buff = buff/t;

            }
        }

        if (buff > 2) {

            myRow.push_back(buff);

        }

        temp.push_back(myRow);

    }

    return temp;

}

//Writes prime numbers are corresponding steps into vector
vector<Point> Collatz::calculatePrimeSteps(long min, long max) {

    vector<vector<long>> tempPrime = calculatePrimeFactors(min, max);
    vector<Point> allStepsTemp = calculateSteps(min, max);
    vector<Point> temp;

    for (long i = 0; i < max-min; i++) {

        Point point;

        if (tempPrime[i].size() == 1) {

            point.update(i+min, allStepsTemp[i].returnY());
            temp.push_back(point);

        }
    }

    minPrimeStep = calculateMinElement(temp);
    maxPrimeStep = calculateMaxElement(temp);

    return temp;

}

vector<Point> Collatz::calculateOrbitalSums(long min, long max) {

    vector<Point> temp;

    for (long i = min; i <= max; i++) {

        Point point;
        long buff = i;
        long sum = 1;

        while (buff > 1) {

            sum = sum + buff;

            if (buff % 2 == 0) {

                buff = buff / 2;

            } else {

                buff = (buff * 3) + 1;

            }
        }

        point.update(i, sum);
        temp.push_back(point);

    }

    return temp;

}

Point Collatz::calculateMaxElement(vector<Point> temp) {

    Point point;

    for (int i = 0; i < temp.size(); i++) {

        if (temp[i].returnY() > point.returnY()) {

            point = temp[i];

        }

    }

    return point;

}

Point Collatz::calculateMinElement(vector<Point> temp) {

    Point point;

    for (int i = 0; i < temp.size(); i++) {

        if (point.returnY() == 0) {

            point.update(i+1,temp[i].returnY());

        }

        if (temp[i].returnY() < point.returnY()) {

            point = temp[i];

        }

    }

    return point;

}

/*void Collatz::calculatePathToOne(long min, long max) {

    int counter = 0;
    int buff = colNum;

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
    cout << colNum  << " took " << counter << " steps to to one";

}*/