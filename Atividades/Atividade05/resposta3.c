#include <stdio.h>
#include <string.h> 

const int TAMANHO = 80;

int main()
{
    char array[TAMANHO];

    printf("digite ate 80 caracter: ");
    scanf("%s", array); 

    for (int i = strlen(array); i > -1; i--) 
    {
       printf("%c", array[i]);
    }
    printf("\n"); 

    return 0;
}