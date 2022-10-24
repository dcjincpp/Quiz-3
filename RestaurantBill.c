#include <stdio.h>

int main( int argc, double argv[])
{
    double tax = argv[0] / 100;
    double tip = argv[1] / 100;

    printf("Tax: %lf Tip: %lf", tax, tip);
}