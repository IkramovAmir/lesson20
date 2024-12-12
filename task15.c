#include <stdio.h>
#include <string.h>

int main() {
    char word[200];
    char smallest[200];
    int minLength = 200;

    printf("Enter word: ");
    fgets(word, sizeof(word), stdin);


    for (int i = 0; word[i] != '\0'; i++) {
        if (word[i] == '\n') {
            word[i] = '\0';
            break;
        }
    }

    char word[200];
    int wordLength = 0;

    for (int i = 0; ; i++) {
        if (word[i] == ' ' || word[i] == '\0') {
            word[wordLength] = '\0';
            if (wordLength < minLength) {
                minLength = wordLength;
                strcpy(smallest, word);
            }
            wordLength = 0;
        } else {
            word[wordLength] = word[i];
            wordLength++;
        }
        if (word[i] == '\0') {
            break;
        }
    }

    printf("Smallest word: %s\n", smallest);
    return 0;
}