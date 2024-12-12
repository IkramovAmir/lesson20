#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char word[100];
    char checkWord[100];
    int just = 0;


    for (int i = 0; word[i] != '\0'; i++) {
        if (word[i] == '\n') {
            word[i] = '\0';
            break;
        }
    }

    for (int i = 0; checkWord[i] != '\0'; i++) {
        if (checkWord[i] == '\n') {
            checkWord[i] = '\0';
            break;
        }
    }

    int length = strlen(word) - 1;

    printf("Pls, enter text: ");
    fgets(word, sizeof(word), stdin);
    printf("Pls, enter second text: ");
    fgets(checkWord, sizeof(checkWord), stdin);

    for (int i = 0; word[i] != '\0'; i++)
    {
        int count = 0;
        for (int j = 0; word[j] != '\0'; j++)
        {
            if (word[i] == word[j])
            {
                count++;
                break;
            }
        }
        if (count == length)
        {
            printf("same");
            just = 1;
        }
    }

   if (!just)
   {
    printf("NOt the same");
   }
   

    return 0;
}