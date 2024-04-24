#include <stdio.h>

int main() 
{
    int szamok[100] = {0}; 
    int db = 0; 

    printf("Adj meg 0 végjelig egész számokat az [1, 99] intervallumból!\n");
    int szam;
    while (1) 
    {
        printf("Szám: ");
        scanf("%d", &szam);

        if (szam == 0) 
            break;

        if (szam < 1 || szam > 99) 
        { 
            printf("Ez a szám kívül esik az elfogadható intervallumon!\n");
            continue; 
        }

        if (szamok[szam] == 0) 
        { 
            szamok[szam] = 1; 
            db++; 
        }
    }

    printf("\n%d db különböző szám lett megadva.\n", db);
    printf("Ezek (növekvő sorrendben): ");
    int first = 1;
    for (int i = 1; i <= 99; i++) 
    {
         if (szamok[i]) 
         { 
            if (!first)
                printf(", "); 
            printf("%d", i); 
            first = 0; 
        }
    }
    printf("\n");

    return 0;
}
