#include <stdio.h>

int contains(int tomb[], int meret, int keresett)
{
    int talalt = 0;
    for (int i = 0; i < meret; i++)
    {
        if (keresett == tomb[i])
        {
            talalt = 1;
            break;
        }
    }
    if (talalt == 1)
    {
        return 1;
    }
    return 0;
}

int elemek(int tomb[], int meret, int keresett)
{
    if (contains(tomb, meret, keresett) == 1)
    {
        for (int i = 0; i < meret; i++)
        {
            if (tomb[i] == keresett)
            {
                return i+1;
                break;
            }
        }
    }
    return 0;
}


int main()
{
    int szamok[11] = {9, 7, 6, 3, 2, 4, 8, 5, 7, 2, 3};
    int meret = 11;

    printf("contains: %d\n", contains(szamok, meret, 0));
    printf("index: %d\n", elemek(szamok, meret, 4));


    return 0;
}