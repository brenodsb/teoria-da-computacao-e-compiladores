#include <stdio.h>
#include <stdlib.h>

int alocacao(int n){
    int *array;
    // Alocação dinâmica de memória usando malloc
    array = (int *) malloc(n * sizeof(int));
    if (array == NULL) {
        printf("Falha na alocação de memória.\n");
        return array;
    }
}

int preencher(int array[], int n){
    // Preencher o array
    for (int i = 0; i < n; i++) {
        array[i] = i * 10;
    }
}

int impressao(int array[], int n){
    // Imprimir o array
    printf("Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
}

int main() {
    int *array, n;
    printf("Digite o tamanho do array: ");
    scanf("%d", &n);

    array = alocacao(n);
    preencher(array, n);
    impressao(array, n);

    // Liberar a memória alocada com malloc
    free(array);

    return 0;
}
