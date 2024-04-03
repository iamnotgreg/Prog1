#include <stdio.h>
#include <string.h>
#include "prog1.h"

#define SIZE 26

string feltolt()
{
    static char abece[SIZE + 1]; // +1 a NUL karakternek

    for (int i = 0; i < SIZE; i++)
    {
        abece[i] = 'a' + i;
    }
    abece[SIZE] = '\0'; // Sztring lezárása NUL karakterrel

    return abece;
}

int main()
{
    string abece = feltolt();

    printf("%c", abece[0]); /*Az első karakter kiírása elősz, shogy ne legyen előre elhagyott szóköz*/
    for (int i = 1; i < SIZE; i++)
    {
        printf(" %c", abece[i]); 
    }
    printf("\n");

    return 0;
}
