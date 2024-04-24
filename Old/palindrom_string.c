#include <stdio.h>
#include "/home/greg/Prog1/Get_string/prog1.h" // /home/greg/Prog1/Get_string/prog1.c
#include <string.h>


int is_palindrom(string s)
{
    int i = 0;
    int j = strlen(s)-1;

    while (i<j)
    {
        if(s[i] != s[j])
        {
            return 0; // hamis 
        }

        i++;
        j--;
    }
    

    return 1; // igaz
}

int main()
{
    string s = "anna";
    
    printf("'%s' palindróm? %s\n", s, is_palindrom(s) ? "igen" : "nem");
    

    return 0;
}