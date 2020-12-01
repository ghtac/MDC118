#include <stdio.h>

int main()
{
    int numeros[10], maior = 0, menor = 100000;

    printf("escreva 10 numero: \n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &numeros[i]);
        if (numeros[i] > maior)
        {
            maior = numeros[i];
        }

        else if (numeros[i] < menor)
        {
            menor = numeros[i];
        }
    }
    printf("maior --> %d\nmenor --> %d\n", maior, menor);
    return 0;
}
