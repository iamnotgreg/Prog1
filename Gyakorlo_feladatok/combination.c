#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

void feltolt(int array[], int length, int llimit, int ulimit)
{
    srand(time(NULL));
    for (int i = 0; i < length; i++)
    {
        array[i] = rand() % (ulimit - llimit + 1) + llimit;
    }
    
}

int main()
{
    int llimit;
    int ulimit;
    int length = 100;
    int array[length];

    int x; // Azokat a számokat keressük a tömbben amik összeadásával vagy kivonásával ez a szám jön ki

    int cnt = 0; // Ha ez a cnt nagyobb mint 0 akkor van olyan szám kombináció amivel kijön a keresett szám, illetve az is tudjuk hogy hány féle kombináció van a tömbben

    char start;

    // puts("Ez a program egy intervallumon belül random számokat generál, és egy megadott számnak kiírja a kombinációit a tömbbön belüli számokkal.");
    char sentence[] = "Ez a program egy intervallumon belül random számokat generál, és egy megadott számnak kiírja a kombinációit a tömbbön belüli számokkal.\n";
    for (int i = 0; sentence[i] != '\0'; i++) {
        putchar(sentence[i]);
        fflush(stdout); // Flush the buffer to ensure immediate printing
        usleep(20000); // Sleep for 50 milliseconds (adjust as needed)
    }

    // puts("Akarja használni ezt a programot? y/n");
    char sentence1[] = "Akarja használni ezt a programot? y/n";
    for (int i = 0; sentence1[i] != '\0'; i++) {
        putchar(sentence1[i]);
        fflush(stdout);
        usleep(20000);
    }
    puts("");
    scanf(" %c", &start);

    if (start == 'n')
    {
        exit(1);
    }
    
    puts("");

    // printf("Adja meg egy intervallumnak az alsó határát: ");
    char sentence2[] = "Adja meg egy intervallumnak az alsó határát: ";
    for (int i = 0; sentence2[i] != '\0'; i++) {
        putchar(sentence2[i]);
        fflush(stdout);
        usleep(20000);
    }
    scanf("%d", &llimit);
    puts("");

    // printf("Adja meg egy intervallumnak az felső határát: ");
    char sentence3[] = "Adja meg egy intervallumnak az felső határát: ";
    for (int i = 0; sentence3[i] != '\0'; i++) {
        putchar(sentence3[i]);
        fflush(stdout);
        usleep(20000);
    }
    
    scanf("%d", &ulimit);
    puts("");

    // printf("Adja meg hogy milyen számnak a kombinációját keresi: ");
    char sentence4[] = "Adja meg hogy milyen számnak a kombinációját keresi: ";
    for (int i = 0; sentence4[i] != '\0'; i++) {
        putchar(sentence4[i]);
        fflush(stdout);
        usleep(20000);
    }
    scanf("%d", &x);
    puts("");

    feltolt(array,length,llimit,ulimit);

    for (int i = 0; i < length - 1; i++)
    {
        for (int j = i + 1; j < length; j++)
        {
            if (array[i] + array[j] == x )
            {
                // printf("%d + %d = %d \n", array[i], array[j], x);
                char number1[100];

                sprintf(number1, "%d + %d = %d \n", array[i], array[j], x);

                for (int i = 0; number1[i] != '\0'; i++) {
                    putchar(number1[i]);
                    fflush(stdout); 
                    usleep(10000); 
                }

                cnt++;
            }
            else if (array[i] - array[j] == x)
            {
                // printf("%d - %d = %d \n", array[i], array[j], x);
                char number2[100];

                sprintf(number2, "%d - %d = %d \n", array[i], array[j], x);

                for (int i = 0; number2[i] != '\0'; i++) {
                    putchar(number2[i]);
                    fflush(stdout); 
                    usleep(10000); 
                }
                cnt++;
            }
            else if (array[j] - array[i] == x)
            {
                // printf("%d - %d = %d \n", array[j], array[i], x);
                char number3[100];

                sprintf(number3, "%d - %d = %d \n", array[j], array[i], x);

                for (int i = 0; number3[i] != '\0'; i++) {
                    putchar(number3[i]);
                    fflush(stdout); 
                    usleep(10000); 
                }
                cnt++;
            }
        }
    }

    if(cnt == 0)
    {
        // printf("A tömbben nincs olyan kombináció amivel %d szám kijönne. \n", x);
         
        char sentence6[100];

        sprintf(sentence6, "A tömbben nincs olyan kombináció amivel %d szám kijönne. \n", x);

        for (int i = 0; sentence6[i] != '\0'; i++) {
            putchar(sentence6[i]);
            fflush(stdout); 
            usleep(50000); 
        }
    }
    else
    {
        char sentence5[100];

        puts("");
        sprintf(sentence5, "A tömbben ennyi kombináció van amivel kijön a keresett szám: %d \n", cnt);

        for (int i = 0; sentence5[i] != '\0'; i++) {
            putchar(sentence5[i]);
            fflush(stdout); 
            usleep(50000); 
    }
    }


    return 0;
}