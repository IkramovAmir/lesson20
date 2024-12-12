#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char text[] = "Kuz keldi, daraxtlar barglarini toka boshladi";
    char wordTocheck[20];
    int count = 0, j = 0;

    printf("Enter text that you wanna check pls: ");
    fgets(wordTocheck, sizeof(wordTocheck), stdin);

    for (int i = 0; wordTocheck[i + 1] != '\0'; i++)
    {
        for (; text[j] != '\0'; j++)
        {
            if (wordTocheck[i] == text[j])
            {
                count++;
                j++;
                break;
            }
            else
            {
                count = 0;
                i = 0;
            }
        }
    }

    if (count == strlen(wordTocheck) - 1)
    {
        printf("This word is available in text");
    }
    else
    {
        printf("This word is not available in text!!!");
    }

    return 0;
}