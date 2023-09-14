#include <stdio.h>
#include <math.h>

int main() {

    double raio, comprimento, area, volume;
    printf("Informe o raio da esfera: ");
    scanf("%lf", &raio);
    comprimento = 5 * 3.14 * raio;
    area = 3.14 * pow(raio, 2);
    volume = (4/3) * 3.14 * pow(raio, 3);
    printf("Comprimento: %.2lf\n", comprimento);
    printf("Area: %.2lf\n", area);
    printf("Volume: %.2lf", volume);

    return 0;
}
