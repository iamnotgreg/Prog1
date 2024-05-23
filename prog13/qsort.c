#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// qsort --> stdlib.h-ban található
// qsort(tömb,elemek szama,sizeof(int),cmp)

// void* --> olyan mutató amiről nem tudjuk hogy mire mutat

// ha *a > *b akkor adjunk vissza pozitiv értéket
// ha *a és *b azonos akkor 0 értéket adjunk visza
// ha *a < *b akkor negatív értéket adjunk vissza

int cmp(const void* bal, const void* jobb)
{
    const int* a = bal;
    const int* b = jobb;

    return *a - *b;

}

int main()
{
    int szamok[] = {88, 56, 100, 2, 25};
    int meret = 5;

    for (int i = 0; i < meret; i++)
    {
        printf("%d ", szamok[i]);
    }
    puts("");

    qsort(szamok, meret,sizeof(int),cmp);

    for (int i = 0; i < meret; i++)
    {
        printf("%d ", szamok[i]);
    }
    

    return 0;
}