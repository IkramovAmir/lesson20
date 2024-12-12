#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(){
    char name[30];
    int count = 0;

    printf("Pls, enter your name: ");
    fgets(name, sizeof(name), stdin);

    for (int i = 0; name[i] != '\0'; i++)
    {
        if (isupper(name[i]))
        {
            count++;
        }
        
    }
    
    printf("The number of uppercases are %d", count);
    return 0;
}