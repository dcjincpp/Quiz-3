#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void checkMagicSquare(int square[3][3])
{
    int a;
    int row1 = 0;
    int row2 = 0;
    int row3 = 0;
    int column1 = 0;
    int column2 = 0;
    int column3 = 0;
    int diagonal1 = 0;
    int diagonal2 = 0;



    for(a = 0; a < 3; a++)
    {
        diagonal1 += square[a][a];
        diagonal2 += square[2-a][a];
        row1 += square[0][a];
        row2 += square[1][a];
        row3 += square[2][a];
        column1 += square[a][0];
        column2 += square[a][1];
        column3 += square[a][2];
    }

    if ((row1 == row2) && (row3 == column1) && (column2 == column3) && (diagonal1 == diagonal2) && (row2 == row3) && (column1 == column2) && (column3 == diagonal1))
    {
        printf("Is a magic square");
    } else {
        printf("Is not a magic square");
    }

}

int main()
{
    int test[3][3] = {{4, 9, 2}, {3, 5, 7}, {8, 1, 6}};

    checkMagicSquare(test);


    return EXIT_SUCCESS;
}