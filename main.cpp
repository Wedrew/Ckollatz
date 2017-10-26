#include <iostream>
#include "Window.h"
#include "Rect.h"
#include "Graph.h"
#include "Collatz.h"

const int WIDTH = 1400;
const int HEIGHT = 700;
const int REALWIDTH = WIDTH*2; //Only used to for systems with Hidpi
const int REALHEIGHT = HEIGHT*2; //Only used to for systems with Hidpi

int main (int argc, char **argv) 
{
    Window window("Collatz", WIDTH, HEIGHT);
    Collatz collatz(1,30000);
    Graph graph(window, collatz, "Steps");

    while (!window.isClosed()) 
    {
        graph.draw();
        window.pollEvents();
        window.clear();
    }
    return 0;
}