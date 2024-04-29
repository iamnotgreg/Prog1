#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    printf("Írj be szavakat: \n");

    char buffer[100]; // Assuming max word length is 99 characters
    const char *word = "kaposztaleves";

    while (1)
    {
        printf(": ");
        if (fgets(buffer, sizeof(buffer), stdin) == NULL) {
            printf("Error reading input.\n");
            return 1;
        }

        // Remove newline character if present
        size_t len = strlen(buffer);
        if (len > 0 && buffer[len - 1] == '\n')
            buffer[len - 1] = '\0';

        if (strcmp(buffer, word) == 0) {
            printf("Vége!\n");
            break;
        }
    }
    
    return 0;
}
