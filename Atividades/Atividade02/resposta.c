#include <stdio.h>

int main()
{
    // 1 questao
    int x = 2;
    int y = 2;

    if (x % y == 0)
        printf("%s\n", " é par ");
    else
    {
        printf("%s\n", " é impar ");
    }

    {
        // 2 questao
        float d = 100;

        if (d <= 100.00)
        {
            printf("%s\n", "1% de desconto");
        }

        else if (d <= 500.00)

        {
            printf("%s\n", "5% de desconto");
        }
        else
        {
            printf("%s\n", "10% de desconto");
        }
    }

    {
        // 3 questao
        int nota = 6;

        switch (nota)
        {
        case 1:
            printf("%s\n", "ruim");

            break;
        case 2:
            printf("%s\n", "Insuficiente");

            break;
        case 3:
            printf("%s\n", "Suficiente");

            break;
        case 4:
            printf("%s\n", "Bom");

            break;
        case 5:
            printf("%s\n", "Ótimo");

            break;
        default:
            printf("%s\n", "não faz parte da nota");
            break;
        }
    }
}
