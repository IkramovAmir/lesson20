#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(){
    char text[20];
    int count = 0;
    
    printf("Enter information: ");
    fgets(text,sizeof(text), stdin);

    for (int i = 0; text[i] != '\0'; i++)
    {
        if (isupper(text[i]))
        {
            count++;
        }
        
    }

    printf("There are %d uppercases", count);
    return 0;
}