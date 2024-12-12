#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main () {
    char words[50];

    printf("Pls, enter information: ");
    fgets(words, sizeof(words), stdin);

    for (int i = 0; words[i] != '\0'; i++)
    {
        if (words[i] == '-')
        {
            printf(" ");
        }else putchar(words[i]);
    }   
}