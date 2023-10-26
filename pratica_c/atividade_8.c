#include <stdio.h>

int main() {

    double peso;
    printf("Informe o peso: ");
    scanf("%lf", &peso);
    printf("Se engordar 15 porcento: %.2lf.\n", peso*1.15);
    printf("Se emagrecer 20 porcento: %.2lf.\n", peso-(peso*0.2));

    return 0;
}
