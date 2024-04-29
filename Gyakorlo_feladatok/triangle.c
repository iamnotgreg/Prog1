#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int num = 0;
    printf("Adja meg hany sorbol alljon a haromszog: ");
    scanf("%d", &num);

    if (num < 0)
    {
        puts("Hiba! Adjon meg egy pozitív számot!");
        exit(1);
    }

    int sor = num;

    for (int i = 0; i < sor; i++)
    {
        /* code */
    }
    
    

    
    return 0;
}