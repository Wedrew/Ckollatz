//
// Created by Andrew Pagan on 6/25/17.
//

#ifndef COLLATZ_COLLATZ_H
#define COLLATZ_COLLATZ_H

#include <vector>
#include "Point.h"

class Collatz {

private:

    unsigned long colNum;

    std::vector<Point> calculateSteps(int num);
    std::vector<Point> calculateOrbitalSums(int num);
    std::vector<std::vector<int>> calculatePrimeFactors(int num);
    std::vector<Point> calculatePrimeSteps(int num);
    Point calculateMaxElement(std::vector<int> temp);
    int calculateMinElement(std::vector<int> temp);

public:

    Collatz(unsigned long input);
    void printOddSteps();
    void printEvenSteps();
    void printSteps();
    void printPrimeFactors();
    void printPrimeSteps();
    void printPathToOne();
    void printOrbitalSum();
    ~Collatz();

    //1D and 2D vectors to use after initialization
    std::vector<Point> steps;
    //Each sub element contains prime factors for the corresponding super? element
    std::vector<std::vector<int>> primeFactors;
    //First element in each sub vector is the prime number, second element is amount of steps
    std::vector<std::vector<int>> primeSteps;
    //Orbital sum of all numbers (e.x. 5 would be 5 + 16 + 8 + 4 + 2 + 1 = 36)
    std::vector<int> orbitalSum;

    int largestOrbitalSum, largestPrimeFactor, largestPrimeSteps;
    int smallestStep, smallestOrbitalSum, smallestPrimeFactor, smallestPrimeSteps;


};

#endif //COLLATZ_COLLATZ_H
