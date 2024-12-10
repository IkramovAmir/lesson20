#include <stdio.h>
#include <ctype.h>
#include <string.h>

void changeUpper(char alpha[])
{
    for (int i = 0; alpha[i] != '\0'; i++)
    {
        printf("%c", toupper(alpha[i]));
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