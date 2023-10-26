#include <stdio.h>

int main() {

    double salarioAtual, salarioFinal;
    printf("Informe o salario atual: ");
    scanf("%lf", &salarioAtual);
    salarioFinal = salarioAtual * 1.25;
    printf("O novo salario eh R$%.2lf apos o aumento de 25.\n", salarioFinal);

    return 0;
}
