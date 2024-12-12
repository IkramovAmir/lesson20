#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char text[] = "qazwsxedcvfrtgbnyujmkiolp";
    char c;

    for (int i = 'a'; i <= 'z'; i++)
    {
        int count = 0;
        for (int j = 0; text[j] != '\0'; j++)
        {
            if (i == text[j])
            {
                count = 1;
                break;
            }
        }

        if (!count)
        {
            c = i;
            break;
        }
    }

    printf("%c", c);
    return 0;
}