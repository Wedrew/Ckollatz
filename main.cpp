#include <iostream>
#include "Collatz.h"
#include "Window.h"


int main (int argc, char **argv) {

    Window window("Collatz", 800, 600);

    while (!window.isClosed()) {

        window.pollEvents();

    }

    return 0;

}