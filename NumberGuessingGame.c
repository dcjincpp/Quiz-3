#include <stdio.h>
#include <stdlib.h> 
#include <time.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    time_t t;
    srand((unsigned) time(&t));
    int option;
    int max = 10;
    char guess[3];
    int value;
    bool quit = false;


    while(!quit)
    {
        int number = ((rand() % max) + 1);
        printf("Press 1 to play a game\n");
        printf("Press 2 to change the max number\n");
        printf("Press 3 to quit\n");

        scanf("%d", &option);

        switch (option)
        {
            case 1 :
                bool correct = false;
                printf("You can enter q to quit anytime\n");
                printf("Enter a number or press q to quit: ");
                while(!correct)
                {
                    scanf("%s", guess);

                    if (strcmp(guess, "q") == 0)
                    {
                        printf("Quit\n");
                        break;
                    } else {
                        value = atoi(guess);
                        if (value < number)
                        {
                            printf("Your guess is too low. Try again\n");
                        } else if (value > number) {
                            printf("Your guess is too high. Try again\n");
                        } else if (value == number) {
                            printf("You won!\n");
                            correct = true;
                        }
                    }
                }
                break;

            case 2 :
                printf("You can change the max value only up to 100 and can not lower than 1: ");
                scanf("%d", &max);
                while(max > 100 || max < 1)
                {
                if(max > 100)
                {
                    printf("The value is past the maximum value, enter another number\n");
                    scanf("%d", &max);
                } else if (max < 0 ) {
                    printf("The max can not be negative, enter another number\n");
                    scanf("%d", &max);
                } else if (max == 0) {
                    printf("The max can not be 0, enter another number\n");
                    scanf("%d", &max);
                }
                }
                break;

            case 3 :
                quit = true;
                break;
        }
    }
    return EXIT_SUCCESS;
}