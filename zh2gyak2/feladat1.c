#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int is_strong_password(char *s)
{
    int lowercase = 0;
    int uppercase = 0;
    int number = 0;
    int numbercnt = 0;
    int special = 0;

    for (int i = 0; i < s[i]; i++)
    {
        if (islower(s[i]))
        {
            lowercase = 1;
        }
        else if (isupper(s[i]))
        {
            uppercase = 1;
        }
        else if (isdigit(s[i]))
        {
            numbercnt++;
        }
        else if (s[i] == '.' || s[i] == ',' || s[i] == ':' || s[i] == ';')
        {
            special = 1;
        }
    }

    if (numbercnt >= 2)
    {
        number = 1;
    }

    return lowercase && uppercase && number && special;
}

int main()
{
    FILE *file = fopen("passwords.txt", "r");
    char line[1024];
    char *s;
    int cnt = 0;
    while (fgets(line, sizeof(line), file) != NULL)
    {
        line[strlen(line) - 1] = '\0';
        s = line;
        is_strong_password(s);
        if (is_strong_password(s) == 1)
        {
            cnt++;
        }
    }

    printf("%d db erős jelszó van a fájlban.\n", cnt);

    fclose(file);

    return 0;
}