#include <stdio.h>
#include <math.h>
#ifndef PI
#define PI 3.14159265358979323846
#endif

double terfogat(double R) {
    double V = 0;
    V = (4 * R * R * R * PI) / 3 ;
    return printf("\nA gömb felszíne: %lf", V);
}

double felszin(double R) {
    double A = 0;
    A = 4 * (R * R) * PI;
    return printf("\nA gömb térfogata: %lf", A);
}

double get_double() {
    double sugar = 0;
    printf("Kérem adja meg a gömb sugarát: ");
    scanf("%lf",&sugar);
    return sugar;
}

int main()
{
    
    double R = get_double();

    felszin(R);
    terfogat(R);

    printf("\n\n");

    return 0;
}