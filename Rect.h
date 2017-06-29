//
// Created by Andrew Pagan on 6/29/17.
//

#ifndef PROJECT_RECT_H
#define PROJECT_RECT_H

#include "Window.h"

class Rect : public Window {

public:

    Rect(const Window &window, int w, int h, int x, int y, int r, int g, int b, int a);
    void draw() const;

private:

    int w, h;
    int x, y;
    int r, g, b, a;


};

#endif //PROJECT_RECT_H
