#include <iostream>
#include "canvas.h"


canvas::canvas(int w, int h)
{
    WIDTH = w;
    HEIGHT = h;
    for (int x = 0; x < WIDTH; x++)
    {
        for (int y = 0; y < HEIGHT; y++) 
        {
            canvasArray[x][y];
        }
    }
}
canvas::canvas()
{
    WIDTH = 50;
    HEIGHT = 50;
}

canvas::~canvas()
{
}


void canvas::printCanvas() 
{
    for (int y = 0; y < HEIGHT; y++) 
    {
        for (int x = 0; x < WIDTH; x++) 
        { 
            std::cout << canvasArray[x][y] << " "; 
        } 
        std::cout << std::endl; 
    } 
} 
void canvas::clearCanvas() 
{
    for (int x = 0; x < WIDTH; x++)
    {
        for (int y = 0; y < HEIGHT; y++) 
        {
            canvasArray[x][y] = 0;
        }
    }
}

void canvas::drawPixel(int x, int y, int color)
{
    canvasArray[x][y] = color; 
}