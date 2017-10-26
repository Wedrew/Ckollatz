//
// Created by Andrew Pagan on 6/29/17.
//

#ifndef PROJECT_GRAPH_H
#define PROJECT_GRAPH_H

#include <vector>
#import "Window.h"
#include "Point.h"

class Graph : public Window 
{
public:
    Graph(const Window &window, vector<Point> points);
    void draw();

private:
    vector<Point> points;
};

#endif //PROJECT_GRAPH_H