#include "matrix.h"
#include <iostream>

int **matrix;
int dimision = 3;

void init()
{
    matrix = new int *[dimision];
    for (int i = 0; i < dimision; i++)
    {
        matrix[i] = new int[dimision];
    }
}

void set(int i, int j, int value)
{
    if (i >= 0 && i < dimision && j >= 0 && j < dimision)
    {
        matrix[i][j] = value;
    }
}

void print()
{
    for (int i = 0; i < dimision; i++)
    {
        for (int j = 0; j < dimision; j++)
        {
            std::cout << matrix[i][j] << "\t";
        }
        std::cout << std::endl;
    }
}