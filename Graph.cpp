//
// Created by Andrew Pagan on 6/29/17.
//

#import "Graph.h"

Graph::Graph(const Window &window, vector<Point> points) : Window(window), points(points) {




}

void Graph::draw()  {

    for (int i =0; i < points.size(); i++) {

        SDL_Point point;
        point.y = -(points[i].returnY()) + height;
        point.x = points[i].returnX();

        SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
        SDL_RenderDrawPoints(renderer, &point, 1);

    }

}

