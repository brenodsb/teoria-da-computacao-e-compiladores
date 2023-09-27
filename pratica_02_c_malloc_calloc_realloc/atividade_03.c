#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Veiculo {
    char chassi[20];
    char marca[50];
    char modelo[50];
    float preco;
};

struct Veiculo* alocacao(int tamanho) {
    // Alocação dinâmica de memória usando malloc
    struct Veiculo* veiculos = (struct Veiculo*)malloc(tamanho * sizeof(struct Veiculo));
    if (veiculos == NULL) {
        printf("Falha na alocação de memória.\n");
        return 1;
    }
    return veiculos;
}

void preencher(struct Veiculo* veiculos, int tamanho) {
    // Preencher estrutura
    for (int i = 0; i < tamanho; i++) {
        printf("\nPreencha os dados do veiculo %d:\n", i + 1);
        printf("Numero do Chassi: ");
        scanf("%s", veiculos[i].chassi);
        printf("Marca: ");
        scanf("%s", veiculos[i].marca);
        printf("Modelo: ");
        scanf("%s", veiculos[i].modelo);
        printf("Preco: ");
        scanf("%f", &veiculos[i].preco);
    }
}

void impressao(struct Veiculo* veiculos, int tamanho) {
    // Imprimir estrutura
    printf("\nLista de Veiculos:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("\nVeiculo %d:\n", i + 1);
        printf("Numero do Chassi: %s\n", veiculos[i].chassi);
        printf("Marca: %s\n", veiculos[i].marca);
        printf("Modelo: %s\n", veiculos[i].modelo);
        printf("Preco: %.2f\n", veiculos[i].preco);
    }
}

int main() {
    int tamanho;

    printf("Digite o tamanho inicial do vetor de veiculos: ");
    scanf("%d", &tamanho);

    struct Veiculo* veiculos = alocacao(tamanho);

    preencher(veiculos, tamanho);

    impressao(veiculos, tamanho);

    // Realocar o vetor para um tamanho maior com realloc
    int novo_tamanho = tamanho + 5;
    veiculos = (struct Veiculo*)realloc(veiculos, novo_tamanho * sizeof(struct Veiculo));
    if (veiculos == NULL) {
        printf("Falha na alocação de memória.\n");
        return 1;
    }

    for (int i = tamanho; i < novo_tamanho; i++) {
        printf("\nPreencha os dados do veiculo %d (apos realocacao):\n", i + 1);
        printf("Numero do Chassi: ");
        scanf("%s", veiculos[i].chassi);
        printf("Marca: ");
        scanf("%s", veiculos[i].marca);
        printf("Modelo: ");
        scanf("%s", veiculos[i].modelo);
        printf("Preco: ");
        scanf("%f", &veiculos[i].preco);
    }

    impressao(veiculos, novo_tamanho);

    // Liberar a memória alocada com malloc e realloc
    free(veiculos);

    return 0;
}
