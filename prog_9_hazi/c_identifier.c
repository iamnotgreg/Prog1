#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "prog1.c"
#include <ctype.h>

int is_valid_c_identifier(const char* input)
{
    
    if (strlen(input) < 1)
    {
        return 0;
    }
    else
    {
        if (isdigit(input[0]))
        {
            return 0;
        }
        else
        {
            for (int i = 0; i < strlen(input); i++)
            {
                if (!isdigit(input[i]) && !islower(input[i]) && !isupper(input[i]) && input[i] != '_')
                {
                    return 0;
                }
                
            }
            
        }
        
    }
    return 1;
}

int main()
{
    puts("Adj meg egy sztringet '*' végjelig: ");
    while (1)
    {
        string input = get_string("Input: ");
        if (strlen(input) == 1 && input[0] == '*')
        {
            break;
        }
        else
        {
            int result = is_valid_c_identifier(input);
            if (result == 0)
            {
                puts("NO");
            }
            else
            {
                puts("YES");
            }
            
        }
        
    }
    

    return 0;
}