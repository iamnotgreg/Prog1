#include <stdio.h>

int main()
{
    int a, t, k;
    a = 0;
    printf("Hány cm a négyzet oldalai? ");
    scanf("%d", &a);
    
    t = a*a;
    k = 4*a;
    
    printf("A négyzet területe: %d\n", t);
    printf("---\n");
    printf("A négyzet kerülete: %d\n", k);
	
    return 0;
}
