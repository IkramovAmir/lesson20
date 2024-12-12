#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
    char text[100], text2[100];
    int count = 0, noncount = 0;

    printf("Pls, enter information: ");
    fgets(text, sizeof(text), stdin);
    printf("Pls, enter second information: ");
    fgets(text2, sizeof(text2), stdin);

    int length = strlen(text);

    for (int i = 0; text[i] != '\0'; i++)
    {
        for (int j = 0; text2[j] != '\0'; j++)
        {
            if (text[i] == text2[j])
            {
                count++;
                break;
            }

            if (text[i] != text2[j])
            {
                noncount++;
            }
            
        }
    }

    if (count == length && noncount == 0)
    {
        printf("Given text is the same.");
    }else printf("Given text is not the same!!!");
    
}