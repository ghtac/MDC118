#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if (a > b)
    {
        printf("%d e o menor numero\n", b);
    }
    else if (a < b)
    {
        printf("%d e o menor nuemero\n", a);
    }
    else
    {
        printf("numeros iguais\n");
    }
    
}