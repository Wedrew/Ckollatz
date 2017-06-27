//
// Created by Andrew Pagan on 6/25/17.
//

#ifndef COLLATZ_COLLATZ_H
#define COLLATZ_COLLATZ_H

#include <vector>

class Collatz {

private:

    unsigned long colNum;
    std::vector<int> CalculateSteps(int num);
    std::vector<int> CalculateOrbitalSum(int num);
    std::vector<std::vector<int>> CalculatePrimeFactors(int num);
    std::vector<std::vector<int>> CalculatePrimeSteps(int num);

    typedef struct orbital {

        //Ignore this for now

    }* orbitalPtr;


    /* DEPRECATED
    //1D and 2D vectors to use after initialization
    std::vector<int> allStepsVect;
    //Orbital sum of all numbers (e.x. 5 would be 5 + 16 + 8 + 4 + 2 + 1 = 36)
    std::vector<int> orbitalSum;
    //Each sub element contains prime factors for the corresponding super? element
    std::vector<std::vector<int>> primeFactors;
    //First element in each sub vector is the prime number, second element is amount of steps
    std::vector<std::vector<int>> primeSteps;
    */

public:

    Collatz(unsigned long input);
    void PrintOddSteps(std::vector<int>);
    void PrintEvenSteps(std::vector<int>);
    void PrintAllSteps(std::vector<int>);
    void PrintAllPrimeFactors(std::vector<std::vector<int>>);
    void PrintAllPrimeSteps(std::vector<std::vector<int>>);
    void PrintPathToOne(int num);
    void PrintOrbitalSum(std::vector<int> temp);
    ~Collatz();

};

#endif //COLLATZ_COLLATZ_H
