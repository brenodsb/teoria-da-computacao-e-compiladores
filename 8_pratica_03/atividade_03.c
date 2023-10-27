#include <stdio.h>

int sucessor(int n) {
    return n + 1;
}

void menorQueRecursivo(int n, int m, int i) {
    if (n <= i && m <= i) {
        if (n < m) {
            printf("[%d, %d] ", n, m);
        }
        menorQueRecursivo(n, sucessor(m), i);
    } else if (n <= i) {
        menorQueRecursivo(sucessor(n), 1, i);
    }
}

void menorQue(int i) {
    printf("Conjunto MQ%d:\n", i);
    i++;
    menorQueRecursivo(0, 1, i);
    printf("\n");
}

int main() {
    int i;
    printf("Informe o valor de i: ");
    scanf("%d", &i);

    menorQue(i);

    return 0;
}
