#include <stdio.h>
#include <math.h>

int main() {

    double n;
    printf("Informe um numero: ");
    scanf("%d", &n);
    for(int i=0; i <= 10; i++){
        printf("%d x %d = %d\n", n, i, n*i);
    }

    return 0;
}
