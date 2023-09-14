#include <stdio.h>

int main() {

    double dMaior, dMenor, area;
    printf("Vamos calcular a area de um losango\n");
    printf("Informe a diagonal maior: ");
    scanf("%lf", &dMaior);
    printf("Informe a diagonal menor: ");
    scanf("%lf", &dMenor);
    area = (dMaior * dMenor)/2;
    printf("A area eh %.2lf", area);

    return 0;
}
