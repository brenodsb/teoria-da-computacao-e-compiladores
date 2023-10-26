#include <stdio.h>

# A

void lerSequencia(int sequencia[], int tamanho) {
    printf("Digite os numeros: \n");

    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &sequencia[i]);
    }
}

void apresentarSequencia(int sequencia[], int tamanho) {
    printf("Sequencia: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", sequencia[i]);
    }
    printf("\n");
}

void armazenarSequencias (int sequencia[], int tamanho, const char *nomeArquivo, int nSequencia) {
    FILE *arquivo = fopen(nomeArquivo, "a");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    fprintf(arquivo, "Sequencia %d:\n", nSequencia);
    for (int i = 0; i < tamanho; i++) {
        fprintf(arquivo, "%d\n", sequencia[i]);
    }

    fclose(arquivo);
}

# B

void lerArquivo(const char *nomeArquivo, int vetor[], int *tamanho) {

    int posicaoSequencia1 = 12

    FILE *arquivo = fopen(nomeArquivo, "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    int i = 0;
    while (fscanf(arquivo, "%d", &vetor[i]) == 1) {
        i++;
    }

    *tamanho = i;

    fclose(arquivo);
}

int main() {

    # Limpar Arquivo
    FILE *arquivo = fopen("sequencias.txt", "w");

    int tamanho1, tamanho2;

    # Sequencia 1
    printf("Tamanho da primeira sequencia: ");
    scanf("%d", &tamanho1);
    int sequencia1[tamanho1];
    lerSequencia(sequencia1, tamanho1);
    apresentarSequencia(sequencia1, tamanho1);
    armazenarSequencias(sequencia1, tamanho1, "sequencias.txt", 1);

    # Sequencia 2
    printf("Tamanho da segunda sequencia: ");
    scanf("%d", &tamanho2);
    int sequencia2[tamanho2];
    lerSequencia(sequencia2, tamanho2);
    apresentarSequencia(sequencia2, tamanho2);
    armazenarSequencias(sequencia2, tamanho2, "sequencias.txt", 2);

    printf("Sequencias armazenadas.");

    return 0;
}
