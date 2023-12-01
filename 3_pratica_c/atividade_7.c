#include <stdio.h>

int main() {

    double salarioM, salarioF, qnt;
    printf("Informe o salario minimo atual: ");
    scanf("%lf", &salarioM);
    printf("Informe o salario do funcionario: ");
    scanf("%lf", &salarioF);
    qnt = salarioF/salarioM;
    printf("O funcionario recebe %.2lf salarios.", qnt);

    return 0;
}
