#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char text[] = "SalomBolalar";

    for (int i = 0; text[i] != '\0'; i++)
    {
        int count = 0;
        for (int j = 0; text[j] != '\0'; j++)
        {
            if (text[i] == text[j] || text[i] == text[j] - 32 || text[i] == text[j] + 32)
            {
                count++;
            }
        }

        printf("%c used %d times\n", text[i], count);
    }

    return 0;
}