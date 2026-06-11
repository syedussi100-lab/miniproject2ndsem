#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define ROWS 25
#define COLS 50

char buffer[ROWS][COLS];

void initializeBuffer()
{
    for(int i=0;i<ROWS;i++)
        for(int j=0;j<COLS;j++)
            buffer[i][j]=' ';
}

void displayBuffer()
{
    for(int i=0;i<ROWS;i++)
    {
        for(int j=0;j<COLS;j++)
            printf("%c",buffer[i][j]);
        printf("\n");
    }
}
int isCirclePoint(int x,int y,int cx,int cy,int r)
{
    int value=(x-cx)(x-cx)+(y-cy)(y-cy);
    return abs(value-r*r)<=r;
}
void drawCircle(int cx,int cy,int r)
{
    for(int y=0;y<ROWS;y++)
    {
        for(int x=0;x<COLS;x++)
        {
            if(isCirclePoint(x,y,cx,cy,r))
                buffer[y][x]='*';
        }
    }
}