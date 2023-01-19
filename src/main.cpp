#include <iostream>
#include "kutuphane.h"
#include "canvas.h"


int main(int, char**)
{
    canvas c = canvas(10, 10);
    c.clearCanvas(); 
    c.drawPixel(10, 10, 1);
    c.drawPixel(0, 5, 2); 
    c.printCanvas();
    std::cout << topla(10, 10) << std::endl;
    return 0;
}