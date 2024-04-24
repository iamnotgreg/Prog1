#include <stdio.h>
#include <string.h>
#include "/home/greg/Prog1/Get_string/prog1.h" 

int rfind_char(string s, char c)
{
    int index = -1;

    for (int i = 0; i < s[i]; i++)
    {
        if(s[i] == c)
        {
            index = i;
        }
    }
    
    return index;

}

int main()
{
    printf("A keresett betu utolso elofordulasa: %d\n",rfind_char("Abba", 'a'));
    printf("A keresett betu utolso elofordulasa: %d\n",rfind_char("Abba", 'x'));
    printf("A keresett betu utolso elofordulasa: %d\n",rfind_char("Abba", 'b'));
    printf("A keresett betu utolso elofordulasa: %d\n",rfind_char("Abba", 'A'));

    return 0;
}