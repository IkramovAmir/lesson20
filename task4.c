#include <stdio.h>
#include <ctype.h>
#include <string.h>

void changeUpper(char alpha[])
{
    for (int i = 0; alpha[i] != '\0'; i++)
    {
        if (islower(alpha[i]))
        {
            printf("%c", toupper(alpha[i]));
        }else if (isupper(alpha[i]))
        {
            printf("%c", tolower(alpha[i]));
        }else printf(" ");
    }
}
int main()
{
    char alphabet[50];

    printf("Enter information pls: ");
    fgets(alphabet, sizeof(alphabet), stdin);

    changeUpper(alphabet);

    return 0;
}