#include <stdio.h>
#include "/home/greg/Prog1/Get_string/prog1.h" // /home/greg/Prog1/Get_string/prog1.c

int main()
{
    string nev = get_string("A neved: ");

    printf("Hello %s!\n", nev);

    return 0;
}