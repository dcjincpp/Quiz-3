#include <stdio.h>
#include <stdlib.h> 
#include <time.h> 

int main( int argc, char *argv[])
{
    time_t i;
    srand((unsigned) time(&i)); 
    
    double taxInput, tipInput;
    sscanf(argv[1], "%lf", &taxInput);
    sscanf(argv[2], "%lf", &tipInput);

    double tax = taxInput / 100;
    double tip = tipInput / 100;
    double subTotal;
    double total;
    double salad = 9.95;
    double soup = 4.55;
    double sandwich = 13.25;
    double pizza = 22.35;
    int item = (rand() % 4);

    switch (item)
    {
        case 0:
            subTotal = 9.95;
            break;
        
        case 1:
            subTotal = 4.55;
            break;
        
        case 2:
            subTotal = 13.25;
            break;
        
        case 3:
            subTotal = 22.35;
            break;

        default: break;
    }

    total = subTotal + tax * subTotal + tip * subTotal;

    printf("Tax: %lf Tip: %lf\n", tax, tip);
    printf("Subtotal: %lf\n", subTotal);
    printf("Total: %lf", total);
}