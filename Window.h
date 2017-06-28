//
// Created by Andrew Pagan on 6/28/17.
//

#ifndef PROJECT_WINDOW_H
#define PROJECT_WINDOW_H

#include <string>
#include <SDL.h>

class Window {

public:

    Window(const std::string &title, int width, int height);
    ~Window();

    void pollEvents();
    inline bool isClosed() const {return closed;};

private:

    bool init();


private:

    std::string title;
    int width = 800;
    int height = 600;
    bool closed = false;

    SDL_Window *window = nullptr;

};


#endif //PROJECT_WINDOW_H
