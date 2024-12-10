#include <stdio.h>
#include <ctype.h>
#include <string.h>

int checkNum(char info[])
{
    int count = 0;

    for (int i = 0; info[i] != '\0'; i++)
    {
        if (isdigit(info[i]))
        {
            count++;
        }
        if (info[i] == '\n')
        {
            info[i] = '\n';
        }
        
    }
    return count;
}
int main()
{
    char word[50];

    printf("Enter information: ");
    fgets(word, sizeof(word), stdin);

    int countingDigit = checkNum(word);
    printf("%d", countingDigit);

    return 0;
}