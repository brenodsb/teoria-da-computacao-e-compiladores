#include <stdio.h>
#include <string.h>

void determinarTamanho(FILE *arquivo, int *tamanho) {
    // Ler caractere
    char c = getc(arquivo);
    // EOF = End of File
    if (c == EOF) {
        *tamanho = 0;
        return;
    }

    determinarTamanho(arquivo, tamanho);
    (*tamanho)++;
}

void determinarReverso(FILE *arquivo, FILE *saida) {
    // Ler caractere
    char c = getc(arquivo);
    // EOF = End of File
    if (c == EOF) {
        return;
    }

    determinarReverso(arquivo, saida);

    // Escrever na saida
    putc(c, saida);
}

int main() {
    FILE *entrada = fopen("texto.txt", "r");
    FILE *saida = fopen("texto_saida.txt", "w");

    int tamanho = 0;

    determinarTamanho(entrada, &tamanho);
    fprintf(saida, "Tamanho: %d\n", tamanho);

    // Posicionar ponteiro no inicio do arquivo
    rewind(entrada);

    determinarReverso(entrada, saida);

    fclose(entrada);
    fclose(saida);

    printf("Concluido");

    return 0;
}
