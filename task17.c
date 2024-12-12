#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char text[] = "qwerty @#$%Hello world%^&";
    int count = 0;

    for (int i = 0; text[i] != '\0'; i++)
    {
        if (!isalpha(text[i]) || isdigit(text[i]) || isspace(text[i]) || '\0')
        {
            count++;
        }
        
    }
    
    printf("%d", count);

    return 0;
}