#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "prog1.h"

#define SIZE 26

void feltolt(char tomb[])
{
    for (int i = 0; i < SIZE; i++)
    {
        tomb[i] = 'a' + i;
    }
    //tomb[SIZE] = '\0'; 
}

int main()
{
    char abece[SIZE]; 

    feltolt(abece);

    printf("%c", abece[0]);
    for (int i = 1; i < SIZE; i++)
    {
        printf(" %c", abece[i]); 
    }
    printf("\n");

    return 0;
}


