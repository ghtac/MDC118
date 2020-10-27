#include <stdio.h>

int main()
{
    char x;
    printf("escreva um  caracter,caracter especial ou numero: ");
    scanf("%c", &x);
    printf("%i, esta é a representacao em relacao com a tabela ASCII", x);

    if ((x > 96 && x < 123) || (x > 64 && x < 91))
    {
        printf("%c é um caracter\n", (int)x);
    }
    else if (x > 47 && x < 58)
    {
        printf("%c é um número\n", x);
    }
    else
    {
        printf("%c é um caracter especial\n", x);
    }

    return 0;
}