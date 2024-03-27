#include <stdio.h>
#include "/home/greg/Prog1/Get_string/prog1.h" // /home/greg/Prog1/Get_string/prog1.c
// #include <string.h>

int my_strlen(string s)
{
    int i = 0;
    while (s[i] != '\0')
    {
        i++;
    }

    return i;
}

int main()
{
    string s = "hello";
    int hossz = my_strlen(s);

    printf("ennek a stringnek a hossza: %d\n", hossz);

    return 0;
}