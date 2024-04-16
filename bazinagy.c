#include <stdio.h>
#include <stdlib.h>

int main() {
    char number[200];
    int digitSum = 0;

    printf("Szam: ");
    scanf("%s", number);

    for (int i = 0; number[i] != '\0'; i++) {
        if (number[i] >= '0' && number[i] <= '9') {
            digitSum += number[i] - '0';
        }
    }

    printf("A szamjegyek osszege: %d\n", digitSum);

    return 0;
}
