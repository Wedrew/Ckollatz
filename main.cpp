#include <iostream>
#include "Window.h"
#include "Rect.h"

int main (int argc, char **argv) {

    Window window("Collatz", 800, 600);
    Rect rect(window, 120, 120, 100, 100, 200, 0, 200, 255);

    while (!window.isClosed()) {

        rect.draw();
        window.pollEvents();
        window.clear();

    }

    return 0;

}