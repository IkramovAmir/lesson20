#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(){

    char wordsCheck[100];
    int count = 0;

    printf("Pls, enter words: ");
    fgets(wordsCheck, sizeof(wordsCheck), stdin);

    for (int i = 0; wordsCheck[i] != '\0'; i++)
    {
        if (wordsCheck[i] == ' ')
        {
            count++;
        }   
    }
    
    printf("Number of words is %d", count + 1);
    return 0;
}