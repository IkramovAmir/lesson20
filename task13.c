#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{

    char word[100];
    int count = 0;

    printf("Pls, enter text: ");
    fgets(word, sizeof(word), stdin);

    int length = strlen(word) - 1;

    for (int i = length; word[i] >= 0; i--)
    {
        for (int j = 0; word[j] != '\0'; j++)
        {
            if (word[i] == word[j])
            {
                count++;
                break;
            }
        }
    }

    count--; //array starts from 0 that is way we minused 1

    if (count == length)
    {
        printf("It is palindrom.");
    }else printf("It is not palindrom!!!");
    


    return 0;
}