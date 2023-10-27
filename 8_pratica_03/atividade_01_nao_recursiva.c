#include <stdio.h>

int main() {
    int limite;
    printf("Informe o limite: ");
    scanf("%d", &limite);

    for (int n = 1; n <= limite; n++) {
        int resultado;
        if (n % 2 == 1) {
            resultado = n / 2 + 1;
        } else {
            resultado = -n / 2;
        }
        printf("[%d, %d], ", n, resultado);
    }

    return 0;
}
