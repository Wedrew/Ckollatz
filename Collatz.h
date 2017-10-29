//
// Created by Andrew Pagan on 6/25/17.
//

#ifndef COLLATZ_COLLATZ_H
#define COLLATZ_COLLATZ_H

#include <vector>
#include "Point.h"

class Collatz 
{
private:
    long colMin, colMax;
    std::vector<Point> calculateSteps(long min, long max);
    std::vector<Point> calculateOrbitalSums(long min, long max);
    std::vector<std::vector<long>> calculatePrimeFactors(long min, long max);
    std::vector<Point> calculatePrimeSteps(long min, long max);
    Point calculateMaxElement(std::vector<Point> temp);
    Point calculateMinElement(std::vector<Point> temp);
    std::vector<vector<long> > calculatePathsToOne(long min, long max);
public:
    Collatz(long min, long max);
    ~Collatz();

    //1D and 2D vectors to use after initialization
    std::vector<Point> steps;
    //Each sub element contains prime factors for the corresponding super? element
    std::vector<std::vector<long>> primeFactors;
    //First element in each sub vector is the prime number, second element is amount of steps
    std::vector<Point> primeSteps;
    //Orbital sum of all numbers (e.x. 5 would be 5 + 16 + 8 + 4 + 2 + 1 = 36)
    std::vector<Point> orbitalSum;
    //Path to one for all numbers, first number is the starting number
    std::vector<vector<long>> pathsToOne;
    //Max number in each orbital
    std::vector<vector<long>> maxElements;

    Point maxStep, maxOrbitalSum, maxPrimeStep;
    Point minStep, minOrbitalSum, minPrimeStep;
};

#endif //COLLATZ_COLLATZ_H