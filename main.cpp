#include <iostream>
#include "Window.h"
#include "Rect.h"
#include "Graph.h"
#include "Collatz.h"

int main (int argc, char **argv) {

    Window window("Collatz", 800, 600);
    Collatz collatz(1,1000);
    Graph graph(window, collatz.steps);

    while (!window.isClosed()) {

        graph.draw();
        window.pollEvents();
        window.clear();

    }

    return 0;

}