//
// Created by Andrew Pagan on 6/25/17.
//

#ifndef COLLATZ_COLLATZ_H
#define COLLATZ_COLLATZ_H

#include <vector>
#include "Point.h"

class Collatz {

private:

    unsigned long colMin, colMax;
    std::vector<Point> calculateSteps(unsigned long min, unsigned long max);
    std::vector<Point> calculateOrbitalSums(int num);
    std::vector<std::vector<int>> calculatePrimeFactors(int num);
    std::vector<Point> calculatePrimeSteps(unsigned long min, unsigned long max);
    Point calculateMaxElement(std::vector<Point> temp);
    Point calculateMinElement(std::vector<Point> temp);

public:

    Collatz(unsigned long min, unsigned long max);
    void printPathToOne();
    ~Collatz();

    //1D and 2D vectors to use after initialization
    std::vector<Point> steps;
    //Each sub element contains prime factors for the corresponding super? element
    std::vector<std::vector<int>> primeFactors;
    //First element in each sub vector is the prime number, second element is amount of steps
    std::vector<Point> primeSteps;
    //Orbital sum of all numbers (e.x. 5 would be 5 + 16 + 8 + 4 + 2 + 1 = 36)
    std::vector<Point> orbitalSum;

    Point maxStep, maxOrbitalSum, maxPrimeStep;
    Point minStep, minOrbitalSum, minPrimeStep;

};

#endif //COLLATZ_COLLATZ_H
