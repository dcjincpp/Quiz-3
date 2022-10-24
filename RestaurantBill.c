#include <stdio.h>

int main( int argc, double argv[])
{
    double tax = argv[0] / 100;
    double tip = argv[1] / 100;
    double subTotal;
    double total;

    printf("Tax: %lf Tip: %lf\n", tax, tip);
    printf("Subtotal: %lf\n", subTotal);
    printf("Total: %lf", total);
}