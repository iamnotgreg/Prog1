#include <stdio.h>
#include <string.h>
#include "prog1.h"

int is_email(string s)
{
    int kukac = 0;
    for (int i = 0; i < s[i]; i++)
    {
        if(s[0] == '@')
        {
            kukac = 0;
        }else if (s[i] == '@')
        {
            kukac = 1;
        }
    }
    
    return kukac;
}

int main()
{

    while(1)
    {
        string s = get_string("Email: ");

        if (strlen(s) == 1 && s[0] ==  '*')
        {
            break;
        }

        if(is_email(s))
        {
            puts("Ez egy email");
        }
        else
        {
            puts("Ez nem egy email");
        }
    }

    return 0;
}
