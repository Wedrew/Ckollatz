#include <iostream>
#include "Window.h"

int main (int argc, char **argv) {

    Window window("Collatz", 1000, 800);

    while (!window.isClosed()) {

        window.pollEvents();
        window.clear();

    }

    return 0;

}