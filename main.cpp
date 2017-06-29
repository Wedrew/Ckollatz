#include <iostream>
#include "Window.h"
#include "Rect.h"
#include "Graph.h"
#include "Collatz.h"

const int WIDTH = 800;
const int HEIGHT = 600;

int main (int argc, char **argv) {

    Window window("Collatz", WIDTH, HEIGHT);
    Collatz collatz(1,1000);
    Graph graph(window, WIDTH, HEIGHT, 25);

    while (!window.isClosed()) {

        graph.draw();
        window.pollEvents();
        window.clear();

    }

    return 0;

}