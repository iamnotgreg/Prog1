#include <stdio.h>
#include <stdbool.h>

int valid_triangle() {
    int a, b, c;
    printf("Adja meg a a háromszög oldalát: ");
    scanf("%d",&a);
    printf("Adja meg a a háromszög oldalát: ");
    scanf("%d",&b);
    printf("Adja meg a a háromszög oldalát: ");
    scanf("%d",&c);

     bool valid = true;
     bool nonvalid = false;
    if (a + b > c && a + c > b && b + c > a)
    {
        printf("\n A háromszög megszerkeszthetősége: %d",valid);
    }
    else {
        printf("\n A háromszög megszerkeszthetősége: %d",nonvalid);
    }
    return 0;
}

int main()
{
    valid_triangle();
    printf("\n\n");
    return 0;
}