//
// Created by Andrew Pagan on 6/28/17.
//

#ifndef PROJECT_WINDOW_H
#define PROJECT_WINDOW_H

#include <string>
#include <SDL2/SDL.h>

class Window 
{
public:
    Window(const std::string &title, int width, int height);
    ~Window();

    void pollEvents();
    void clear() const;
    inline bool isClosed() const {return closed;};

private:
    bool init();
    std::string title;
    bool closed = false;
    SDL_Window *window = nullptr;

protected:
    SDL_Renderer *renderer = nullptr;
    int width;
    int height;
};

#endif //PROJECT_WINDOW_H