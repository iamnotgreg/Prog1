#include <stdio.h>
#define SIZE 26

void feltolt(char tomb[])
{
    for (int i = 0; i < SIZE; i++)
    {
        tomb[i] = 'a' + i;
    }
}

int main()
{
    char abc[SIZE];
    feltolt(abc);

    printf("%s\n", abc);

    // for (int i = 0; i < SIZE; i++)
    // {
    //     printf("%c ", abc[i]);
    // }
    
    // printf("\n");

    return 0;
}