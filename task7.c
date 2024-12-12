#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char word[100];
    char vowels[11] = "aeuoiAUEIO";

    printf("Pls, enter words: ");
    fgets(word, sizeof(word), stdin);
    for (int i = 0; word[i] != '\0'; i++)
    {
        int count = 0;

        for (int a = 0; vowels[a] != '\0'; a++)
        {
            if (word[i] == vowels[a])
            {

                for (int j = 0; word[j] != '\0'; j++)
                {
                    if (word[i] == word[j])
                    {
                        count++;
                    }
                }
            }
        }
        if (count != 0)
        {
            printf("%c letter is used %d times ", word[i], count);
        }
    }

    return 0;
}