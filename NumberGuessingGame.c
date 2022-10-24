#include <stdio.h>
#include <stdlib.h> 
#include <time.h> 

int main()
{
    time_t t;
    srand((unsigned) time(&t));
    int number = ((rand() % 10) + 1);

    int option;

    printf("Press 1 to play a game\n");
    printf("Press 2 to change the max number\n");
    printf("Press 3 to quit\n");

    scanf("%d", &option);
}