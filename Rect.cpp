//
// Created by Andrew Pagan on 6/29/17.
//

#include "Rect.h"


Rect::Rect(const Window &window, int w, int h, int x, int y, int r, int g, int b, int a) : Window(window), w(w), h(h), x(x), y(y), r(r), g(g), b(b), a(a) 
{
}

void Rect::draw() const 
{
    SDL_Rect rect;

    rect.h = h;
    rect.w = w;

    rect.x = x;
    rect.y = y;

    SDL_SetRenderDrawColor(renderer, 200, 0, 200, 255);
    SDL_RenderFillRect(renderer, &rect);
};