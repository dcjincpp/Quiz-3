#include <stdio.h>
#include <stdlib.h> 
#include <time.h>
#include <stdbool.h>

int main()
{
    time_t t;
    srand((unsigned) time(&t));
    int number = ((rand() % 10) + 1);
    int guess;
    bool correct = false;

    int option;

    //while()
    printf("Press 1 to play a game\n");
    printf("Press 2 to change the max number\n");
    printf("Press 3 to quit\n");

    scanf("%d", &option);

    switch (option)
    {
        case 1:
            printf("You can enter q to quit anytime\n");
            printf("Enter a number: ");
            while(!correct && (scanf("%d", &guess) == 1))
                if (guess < number)
                {
                    
                    printf("Your guess is too low. Try again\n");
                    //scanf("%d", &guess);
                } else if (guess > number) {
                    printf("Your guess is too high. Try again\n");
                    //scanf("%d", &guess);
                } else if (guess == number) {
                    printf("You won!");
                    correct = true;
                }
            break;
    }

    return EXIT_SUCCESS;
}