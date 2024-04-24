#include <stdio.h>
#include <string.h>
#include "/home/greg/Prog1/Get_string/prog1.h" // /home/greg/Prog1/Get_string/prog1.c

int char_count(string s, char c){

    int cnt = 0;

    for (int i = -1; i < s[i]; i++)
    {
        if( s[i] == c)
        {
            cnt++;
        }
    }
    
    return cnt;
}

int main()
{
    printf("Ez a string %d db megadott betut tartalmaz\n", char_count("Abba", 'a'));
    

    return 0;
}