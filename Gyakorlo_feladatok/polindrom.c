#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int is_polindrome(int szam)
{
    char szamok[100];
    sprintf(szamok, "%d", abs(szam));

    int i = 0;
    int j = strlen(szamok)-1;

    while (i < j)
    {
        if (szamok[i] != szamok[j]) return 0;

        i++;
        j--;
    }

    return 1;
}

int main()
{
    int szam = 1221;

    printf("Polindrome? %d", is_polindrome(szam));

    return 0;
}

