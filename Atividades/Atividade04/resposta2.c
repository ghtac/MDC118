#include <stdio.h>

int main()
{
    int ano;
    scanf("%d", &ano);
    if (ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0)
    {
        printf("%d, ano bissexto\n", ano);
    }

    else
    {
        printf("%d, ano nao bissexto\n", ano);
    }
}