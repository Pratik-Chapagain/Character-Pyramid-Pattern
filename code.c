// C program to print character pyramid pattern

#include <stdio.h>

 
int main()
{
    int i, j;
    int rows = 5;
    char character = 'A';
    for (i = 0; i < rows; i++) {
        for (j = 0; j <= i; j++) {
            printf("%c ", character);
        }
        printf("\n");
        character++;
    }
    return 0;
}