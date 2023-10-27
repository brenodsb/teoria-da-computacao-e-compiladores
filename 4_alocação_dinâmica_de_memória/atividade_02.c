#include <stdio.h>
#include <stdlib.h>

struct Pessoa {
    char cpf[12];
    char nome[50];
    float salario;
};

struct Pessoa* alocacao(int tamanho) {
    // Alocação dinâmica de memória usando calloc
    struct Pessoa* pessoas = (struct Pessoa*)calloc(tamanho, tamanho * sizeof(struct Pessoa));
    if (pessoas == NULL) {
        printf("Falha na alocação de memória.\n");
        return 1;
    }
    return pessoas;
}

void preencher(struct Pessoa* pessoas, int tamanho) {
    // Preencher estrutura
    for (int i = 0; i < tamanho; i++) {
        printf("Preencha os dados da pessoa %d:\n", i + 1);
        printf("CPF: ");
        scanf("%s", pessoas[i].cpf);
        printf("Nome: ");
        scanf("%s", pessoas[i].nome);
        printf("Salario: ");
        scanf("%f", &pessoas[i].salario);
    }
}

void impressao(struct Pessoa* pessoas, int tamanho) {
    // Imprimir estrutura
    printf("\nLista de Pessoas:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Pessoa %d:\n", i + 1);
        printf("CPF: %s\n", pessoas[i].cpf);
        printf("Nome: %s\n", pessoas[i].nome);
        printf("Salario: %.2f\n", pessoas[i].salario);
    }
}

int main() {
    int tamanho;

    printf("Digite o numero de pessoas: ");
    scanf("%d", &tamanho);

    struct Pessoa* pessoas = alocacao(tamanho);

    preencher(pessoas, tamanho);

    impressao(pessoas, tamanho);

    // Liberar a memória alocada com calloc
    free(pessoas);

    return 0;
}
