#include <stdio.h>
#include "/home/greg/Prog1/Get_string/prog1.h" // /home/greg/Prog1/Get_string/prog1.c

int get_int(string prompt)
{
    printf("%s", prompt);
    int n;
    scanf("%d", &n);
    return n;
}


int main()
{
    // int x = get_int("szám: ");
    // printf("A megadott szám: %d\n", x);

    int ev = get_int("Hány éves vagy? ");
    printf("Te akkor most tényleg %d éves vagy?", ev);

    return 0;
}