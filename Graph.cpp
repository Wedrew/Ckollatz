//
// Created by Andrew Pagan on 6/29/17.
//

#import "Graph.h"
#import "Collatz.h"

Graph::Graph(const Window &window, Collatz collatz) : Window(window), collatz(collatz)
{
}

void Graph::draw()  
{
    std::vector<Point> points = collatz.steps;
    for (int i =0; i < points.size(); i++) 
    {
        SDL_Point point;
        point.y = -(points[i].returnY())*4 + (height*2)-25;
        point.x = (points[i].returnX())/10+25;

        SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
        SDL_RenderDrawPoints(renderer, &point, 1);
        
    }
    int displacement = 25;

    SDL_Point axis[4];
    axis[0] = {displacement,(height*2)-displacement};
    axis[1] = {(width*2),(height*2)-displacement};
    axis[2] = {displacement,(height*2)-displacement};
    axis[3] = {displacement,0};

    SDL_Point yArrow[3];
    yArrow[0] = {(displacement-6), 6};
    yArrow[1] = {(displacement), 0};
    yArrow[2] = {(displacement+6), 6};
    yArrow[3] = {(displacement), 0};

    SDL_Point xArrow[3];
    xArrow[0] = {((width*2)-6), ((height*2)-displacement)-6};
    xArrow[1] = {(width*2), (height*2)-displacement};
    xArrow[2] = {((width*2)-6), ((height*2)-displacement)+6};
    xArrow[3] = {(width*2), (height*2)-displacement};



    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderDrawLines(renderer,xArrow,4);
    SDL_RenderDrawLines(renderer,yArrow, 4);
    SDL_RenderDrawLines(renderer, axis, 4);
}