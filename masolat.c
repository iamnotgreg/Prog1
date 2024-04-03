#include <stdio.h>
#include <stdlib.h> 
#include <string.h> 

int main()
{
    int szam_db;
    printf("Hány db számot szeretnél bevinni?\n");
    scanf("%d", &szam_db);

    int szamok[szam_db];
    for(int i = 0; i < szam_db; i++)
    {
        printf("%d. szám: ", i + 1);
        scanf("%d", &szamok[i]);
    }

    int abs_szamok[szam_db];
    for(int i = 0; i < szam_db; i++)
    {
        abs_szamok[i] = abs(szamok[i]); 
    }

    printf("A bevitt számok abszolútértékei: ");
    for(int i = 0; i < szam_db; i++)
    {
        printf("%d", abs_szamok[i]);
        if(i < szam_db - 1)
            printf(", "); 
    }
    printf("\n");

    printf("A bevitt számok: ");
    for(int i = 0; i < szam_db; i++)
    {
        printf("%d", szamok[i]);
        if(i < szam_db - 1)
            printf(", "); 
    }
    printf("\n");

    return 0;
}
