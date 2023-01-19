#pragma once

class canvas
{
private:
    /* data */
public:
    int WIDTH;
    int HEIGHT;
    canvas();
    canvas(int w, int h);
    int canvasArray[0][0];
    ~canvas();

    void printCanvas();
    void clearCanvas();
    void drawPixel(int x, int y, int color);
};





