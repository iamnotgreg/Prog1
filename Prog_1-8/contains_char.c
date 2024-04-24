#include <stdio.h>
#include <string.h>
#include "/home/greg/Prog1/Get_string/prog1.h" // /home/greg/Prog1/Get_string/prog1.c

int contains_char(string s, char c)
{

    for (int i = 0; i < s[i]; i++)
    {
        if (s[i] == c)
        {
            return 1;
        }
    }

    return 0;
}

int main()
{
    printf("Ez a string tartalmazza a megadott betut? %s\n", contains_char("Hello", 'l') ? "igen" : "nem");

    return 0;
}