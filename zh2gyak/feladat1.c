#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "prog1.c"

int is_strong_password(char* s)
{
    int lowercase = 0;
    int uppercase = 0;
    int number = 0;
    int numbercnt = 0;
    int special = 0;
    
    for (int  i = 0; i < s[i]; i++)
    {
        if(islower(s[i]))
        {
            lowercase = 1;
        }else if( isupper(s[i]))
        {
            uppercase = 1;
        }else if (isdigit(s[i]))
        {
            numbercnt++;
        }else if (s[i] == '.' || s[i] == ':' || s[i] == ',' || s[i] == ';')
        {
            special = 1;
        }
    }

    if (numbercnt >= 2)
    {
        number = 1;
    }
    
    return  lowercase && uppercase && special && number;
}


int main()
{
    int cnt = 0;
    char line[100];
    char * s;
    FILE *file = fopen("passwords.txt", "r");
    while (fgets(line, sizeof(line), file) != NULL)
    {
        s = line;
        if (is_strong_password(s) == 1)
        {
            cnt++;
        }
    }

    fclose(file);

    printf("%d ", cnt);
    

    
    return 0;
}