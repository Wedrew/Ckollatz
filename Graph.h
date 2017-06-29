//
// Created by Andrew Pagan on 6/29/17.
//

#ifndef PROJECT_GRAPH_H
#define PROJECT_GRAPH_H

#include <vector>
#import "Window.h"
#include "Point.h"

class Graph : public Window {

public:

    Graph(const Window &window, int width, int height, int displacement);
    void draw();

private:

    int width;
    int height;
    int displacement;

};

#endif //PROJECT_GRAPH_H
