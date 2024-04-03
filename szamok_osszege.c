#include <stdio.h>
#include <stdlib.h>
#include "prog1.h"

int main(int argc, string argv[])
{
      if (argc == 3)
    {
        int szam1 = atoi(argv[1]); 
        int szam2 = atoi(argv[2]); 

        int osszeg = szam1 + szam2;

        printf("%d\n", osszeg);
    }
    else 
    {
        puts("Hiba! Két paramétert (számot) kell megadni.");
        exit(1);
    }

    return 0;
} 