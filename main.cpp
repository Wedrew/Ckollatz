#include <iostream>
#include "Window.h"
#include "Rect.h"
#include "Graph.h"
#include "Collatz.h"

const int WIDTH = 1400;
const int HEIGHT = 700;

int main (int argc, char **argv) 
{
    Window window("Collatz", WIDTH, HEIGHT);
    Collatz collatz(1,100000);
    Graph graph(window, collatz.steps);

    while (!window.isClosed()) 
    {
        graph.draw();
        window.pollEvents();
        window.clear();
    }
    return 0;
}