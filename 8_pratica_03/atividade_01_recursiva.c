#include <stdio.h>

void relacionarNumerosRecursivamente(int n, int limite) {
    if (n > limite) {
        return;
    }
    int resultado;
    if (n % 2 == 1) {
        resultado = n / 2 + 1;
    } else {
        resultado = -n / 2;
    }
    printf("[%d, %d], ", n, resultado);
    relacionarNumerosRecursivamente(n + 1, limite);
}

int main() {
    int limite;
    printf("Informe o limite: ");
    scanf("%d", &limite);

    relacionarNumerosRecursivamente(1, limite);

    return 0;
}
