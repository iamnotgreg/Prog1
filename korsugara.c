#include <stdio.h>
#include <math.h>
#ifndef PI
#define PI 3.14159265358979323846
#endif

int sugar = 0;

double kerulet() {
    double kerulet;
    kerulet = 2 * sugar * PI;
    return kerulet;
}

double terulet() {
    double terulet;
    terulet = (sugar * sugar)* PI;
    return terulet;
}

int main()
{
    printf("Adja meg a kör sugarát: ");
    scanf("%d", &sugar);

    printf("A kör kerülete: %f\n", kerulet()); 
    printf("A kör területe: %f\n", terulet());


    printf("\n\n");

    return 0;
}