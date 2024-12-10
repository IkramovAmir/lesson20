#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(){
    char word[20];
    int count = 0;
    
    printf("Enter information: ");
    fgets(word,sizeof(word), stdin);

    for (int i = 0; word[i] != '\0'; i++)
    {
        if (isupper(word[i]))
        {
            count++;
        }
        
    }

    printf("There are %d uppercases", count);
    return 0;
}