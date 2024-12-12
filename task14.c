#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{

    char word[100];

    printf("Pls, enter text: ");
    fgets(word, sizeof(word), stdin);

    int length = strlen(word) - 1;
    // printf("%d", length);
    for (int i = 0; word[i] != '\0'; i++)
    {
        if (word[i] == ' ')
        {
            for (int j = i; j >= 0; j--)
            {
                printf("%c", word[j - 1]);
            }
            printf(" ");
        }

        if (word[i] == word[length])
        {
            for (int j = i; j >0 && word[j - 1] != ' '; j--)
            {
                printf("%c", word[j - 1]);
            }
        }
    }

    return 0;
}