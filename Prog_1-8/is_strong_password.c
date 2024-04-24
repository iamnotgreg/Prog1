#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "prog1.c"

int is_strong_password(string s)
{
    int lowercase = 0;
    int uppercase = 0;
    int number = 0;

    for (int i = 0; i < s[i]; i++)
    {
        char c = s[i];
        if(strlen(s) >= 8)
        {
            if(isdigit(c))
            {
                number = 1;
            }
            else if(islower(c))
            {
                lowercase = 1;
            }
            else if(isupper(c))
            {
                uppercase = 1;
            }
        }
    }
    
    return lowercase && uppercase && number;
}

int main()
{
    while(1)
    {
        string s = get_string("Jelszó: ");
        
        if (strlen(s) == 1 && s[0] == '*')
        {
            break;
        }

        if(is_strong_password(s))
        {
            puts("Erős jelszó.");
        }
        else
        {
            puts("Gyenge jelszó.");
        }
    }

    return 0;
}