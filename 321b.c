#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "/home/greg/Prog1/Get_string/prog1.h"

int main(int argc, string argv[])
{
    if (argc > 2)
    {
        puts("Hiba! Maximum egy paraméter adható meg!");
        exit(1);
    }
    // else, ha ideérünk, akkor argc értéke 1 vagy 2

    if (argc == 1)
    {
        puts("Hello world!");
    }
    else
    {
        string nev = argv[1];
        if (strcmp(nev, "Batman") == 0 || strcmp(nev, "Robin") == 0)
        {
            puts("Denevérveszély!");
        }
        else
        {
            printf("Hello %s!\n", nev);
        }
    }

    return 0;
}