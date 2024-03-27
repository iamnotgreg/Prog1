#include <stdio.h>
#include "/home/greg/Prog1/Get_string/prog1.h" // /home/greg/Prog1/Get_string/prog1.c
// #include <string.h>

int my_strlen(string s)
{
    int i;
    for (i = 0; s[i] != '\0'; i++)
    {
        // üres
    }

    return i;
}

int main()
{
    string s = "hello szia";
    int hossz = my_strlen(s);

    printf("ennek a stringnek a hossza: %d\n", hossz);

    return 0;
}