#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

bool found = false;

void checkMagicSquare(int square[3][3])
{
    int a, b, c, x, y;
    bool unique = true;
    int row1 = 0;
    int row2 = 0;
    int row3 = 0;
    int column1 = 0;
    int column2 = 0;
    int column3 = 0;
    int diagonal1 = 0;
    int diagonal2 = 0;
    int same = 0;
    int i = 0;
    int arr[9];

    for(b = 0; b < 3; b++)
    {
        for(c = 0; c < 3; c++)
        {
            arr[i] = square[b][c];
            i++;
        }
    }

    for(i = 0; i < 9; i++)
    {
        for(int v = 0; v < 9; v++)
        {
            if(arr[i] == arr[v])
            {
                same++;
            }
        }
    }

    if(same >= 10)
    {
        unique = false;
    }

    if (unique)
    {
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
            printf("Is a magic square\n");
            found = true;
        } else {
            printf("Is not a magic square\n");
        }
    } else {
        printf("Numbers are not unique\n");
    }

}

int main()
{
    int count = 0;
    int x,y;
    time_t t;
    srand((unsigned) time(&t));
    //int test[3][3] = {4,9,2,3,5,7,8,1,6};
    //checkMagicSquare(test);
    int randomArray[3][3] = {0,0,0,0,0,0,0,0,0};

    while(!found)
    {
        count++;
        for (x = 0; x < 3; x++)
        {
            for(y = 0; y < 3; y++)
            {
                randomArray[x][y] = (rand() % 9) + 1;
            }
        }

        (checkMagicSquare(randomArray));
    }


    printf("%d", count);
    printf("[%d %d %d]\n[%d %d %d]\n[%d %d %d]\n", randomArray[0][0], randomArray[0][1], randomArray[0][2], randomArray[1][0], randomArray[1][1], randomArray[1][2], randomArray[2][0], randomArray[2][1], randomArray[2][2]);
    return EXIT_SUCCESS;
}