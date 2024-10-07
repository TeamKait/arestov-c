#include <stdio.h>

int main()
{
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
    };

    printf("Matrix elements: \n");
    for (int y = 0; y < 3; y++)
    {

        for (int x = 0; x < 3; x++)
        {
            printf("matrix[%d][%d] = %d\n", y, x, matrix[y][x]);
        }
    }

    matrix[1][1] = 90;
    printf("Updated Matrix elements: \n");
    for (int y = 0; y < 3; y++)
    {

        for (int x = 0; x < 3; x++)
        {
            printf("matrix[%d][%d] = %d\n", y, x, matrix[y][x]);
        }
    }
}