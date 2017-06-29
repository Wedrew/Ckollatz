//
// Created by Andrew Pagan on 6/29/17.
//

#import "Graph.h"

Graph::Graph(const Window &window, int width, int height, int displacement) : Window(window), width(width), height(height), displacement(displacement) {


}

void Graph::draw()  {


    SDL_Point axis[4];
    axis[0] = {displacement,height-displacement};
    axis[1] = {width,height-displacement};
    axis[2] = {displacement,height-displacement};
    axis[3] = {displacement,0};

    SDL_Point yArrow[3];
    yArrow[0] = {(displacement-6), 6};
    yArrow[1] = {(displacement), 0};
    yArrow[2] = {(displacement+6), 6};
    yArrow[3] = {(displacement), 0};

    SDL_Point xArrow[3];
    xArrow[0] = {(width-6), (height-displacement)-6};
    xArrow[1] = {width, height-displacement};
    xArrow[2] = {(width-6), (height-displacement)+6};
    xArrow[3] = {width, height-displacement};



    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    SDL_RenderDrawLines(renderer,xArrow,4);
    SDL_RenderDrawLines(renderer,yArrow, 4);
    SDL_RenderDrawLines(renderer, axis, 4);



}

