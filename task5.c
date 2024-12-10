#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char alphabet[50];
    char extraAlpha[2];

    printf("Enter information pls: ");
    fgets(alphabet, sizeof(alphabet), stdin);

    int max = 0;
    int i = 0;

    while (alphabet[i] != '\0')
    {
        int count = 0;
        for (int j = 0; alphabet[j] != '\0'; j++)
        {
            if (alphabet[i] == alphabet[j])
            {
                count++;
                if (count > max)
                {
                    max = count;
                    extraAlpha[0] = alphabet[i];
                }
            }
        }
        i++;
    }

    printf("The most used alphabet is %c, It used %d times", extraAlpha[0], max);

    return 0;
}