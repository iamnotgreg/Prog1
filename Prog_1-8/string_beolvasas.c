#include <stdio.h>
#include <string.h>

// fgets()

#define SIZE 5

int main()
{
    char text[SIZE];
    printf("Neved: ");
    fgets(text, SIZE, stdin);
    text[strlen(text)-1] = '\0';

    printf("Hello %s!\n", text);

    return 0;
}