#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    char text[] = "Bugun havo yaxshi. Ertaga yomon bo'lishi mumkin";
    printf("%s\n", strrchr(text, ' ') + 1);  // Print the last word after the last space
    return 0;
}