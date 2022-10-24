#include <stdio.h>
#include <stdlib.h> 
#include <time.h> 

int main()
{
    time_t t;
    srand((unsigned) time(&t));
    int number = ((rand() % 10) + 1);
}