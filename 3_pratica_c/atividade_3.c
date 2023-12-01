#include <stdio.h>

int main() {

    double dolar, valor, valorTotal;
    printf("Informe a cotacao do dolar em reais: ");
    scanf("%lf", &dolar);
    printf("Qaunto voce tem em dolares: ");
    scanf("%lf", &valor);
    valorTotal = dolar*valor;
    printf("Voce tem R$%.2lf reais.\n", valorTotal);

    return 0;
}
