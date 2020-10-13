#include <stdio.h>

int main()
{
    // atividade 1
    for (int i = 1; i < 101; i++)
    {

        if (i % 3 == 0)
        {
            if (i == 99)
            {
                printf("%i.", i);
                continue;
            }
            printf("%i, ", i);
        }
        else
        {
            continue;
        }
    }
    printf("\n");

    //atividade 2

    {

        int atual = 1;
        int anterior = 0;
        int y;
        for (y = 0; y < 90; ++y)
        {
            printf("%d, ", anterior);

            y = anterior + atual;
            anterior = atual;
            atual = y;
        }
        printf("\n");

        {
            //atividade 3
            int x, n;

            scanf("%d", &n);

            for (x = 1; n > 1; n = n - 1)
                x = x * n;

            printf("%d\n", x);
        }
    }

    return 0;
}
