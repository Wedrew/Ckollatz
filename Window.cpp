//
// Created by Andrew Pagan on 6/28/17.
//

#include <SDL.h>
#include "Window.h"
#include "Collatz.h"

Window::Window(const std::string &title, int width, int height) : title(title), width(width), height(height) {

   closed = !init();

}

Window::~Window() {

    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);
    SDL_Quit();

}

bool Window::init() {

    if (SDL_Init(SDL_INIT_VIDEO) != 0) {

        std::cerr << "Failed to initialize SDL.\n";
        return 0;

    }

    window = SDL_CreateWindow(title.c_str(), SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, width, height, 0);

    if (window == nullptr) {

        std::cerr << "Failed to create window.\n";
        return 0;

    }

    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

    if (renderer == nullptr) {

        std::cerr << "Failed to create renderer.\n";
        return 0;

    }

    return true;

}

void Window::pollEvents() {

    SDL_Event event;

    if (SDL_PollEvent(&event)) {

        switch (event.type) {

            case SDL_QUIT:
                closed = true;
                break;

            case SDL_KEYDOWN:
                switch (event.key.keysym.sym) {

                    case SDLK_ESCAPE:
                    std::cout << "You clicked \'escape\'\n";
                        closed = true;
                        break;

                }

            default:
                break;
        }
    }
}

void Window::clear() const {

    SDL_RenderPresent(renderer);
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderClear(renderer);

}