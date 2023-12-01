#include <stdio.h>

void menorQue(int i) {
    printf("Conjunto MQ%d:\n", i);

    i++;

    for (int n = 0; n <= i; n++) {
        for (int m = 1; m <= i; m++) {
            if (n < m) {
                printf("[%d, %d] ", n, m);
            }
        }
    }

    printf("\n");
}

int main() {
    int i;
    printf("Informe o valor de i: ");
    scanf("%d", &i);

    menorQue(i);

    return 0;
}
