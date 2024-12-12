#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char password[16];
    int countAlpha = 0, counalpha = 0, countDigit = 0;

    printf("Pls, enter your password that included uppercase , lowercase and digit at least one time: ");
    fgets(password, sizeof(password), stdin);

    for (int i = 0; password[i] != '\0'; i++)
    {
        if (isupper(password[i]))
        {
            countAlpha++;
        }
        else if (islower(password[i]))
        {
            counalpha++;
        }
        else if (isdigit(password[i]))
        {
            countDigit++;
        }
    }

    if (countAlpha != 0 && counalpha != 0 && countDigit != 0)
    {
        printf("Your code is safe, thanks, you can continue...");
    }else printf("Your code is not safe , pls follow recomendation!!!");
    
    return 0;
}