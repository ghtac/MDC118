#include <stdio.h>

int main()
{
    // 1 questao
    float raio = 2.76;
    float pi = 3.1416;

    printf("%f\n", 2 * raio * pi);

    {
        // 2 questao

        float s = 3600;
        float m;
        float h;

        m = s / 60;
        h = s / 3600;
        printf("%.2f\n", s);
        printf("%.2f\n", m);
        printf("%.2f\n", h);
    }

    {
        // 3 questao
        
         long double G = 2.47;
         long double B;

         B = G * 1073741824;

         printf("%.4LF\n", B);

    }
}
