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
