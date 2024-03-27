#include <stdio.h>

int main()
{
    int jabbuci;
    printf("Mennyire kurva jabbuci?");
    scanf("%d", &jabbuci);
    for(int kurva=1; kurva<=jabbuci; kurva++)
    {
        printf("Jabbuci kurva: %d\n", kurva);
    }

    return 0;
}