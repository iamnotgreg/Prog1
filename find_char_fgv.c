#include <stdio.h>
#include "/home/greg/Prog1/Get_string/prog1.h" // /home/greg/Prog1/Get_string/prog1.c
#include <string.h>

int find_char(string s, char c)
{
    int index = 0;

    for (int i = 0; i < s[i]; i++)
    {
        if( s[i] == c)
        {
            index = i;
        }
    }
    
    return index;
}

int main()
{
    string s = "hello";
    char c = 'o';

    printf("A '%c' indexe : %d ", c, find_char(s, c));


    return 0;
}