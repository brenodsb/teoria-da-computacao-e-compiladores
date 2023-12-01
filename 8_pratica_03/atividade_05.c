#include <stdio.h>
#include <stdlib.h>

#define NUM_CIDADES 4

int grafo[NUM_CIDADES][NUM_CIDADES];

void inserirDistancia(int cidade1, int cidade2, int distancia) {
    if (cidade1 >= 0 && cidade1 < NUM_CIDADES && cidade2 >= 0 && cidade2 < NUM_CIDADES) {
        grafo[cidade1][cidade2] = distancia;
        grafo[cidade2][cidade1] = distancia;
    } else {
        printf("Cidades invalidas!\n");
    }
}

int contarEstradas(int cidade) {
    int contador = 0;
    if (cidade >= 0 && cidade < NUM_CIDADES) {
        for (int i = 0; i < NUM_CIDADES; i++) {
            if (grafo[cidade][i] > 0) {
                contador++;
            }
        }
    } else {
        printf("Cidade invalida!\n");
    }
    return contador;
}

void imprimirMatriz() {
    printf("Matriz de distancias:\n");
    for (int i = 0; i < NUM_CIDADES; i++) {
        for (int j = 0; j < NUM_CIDADES; j++) {
            printf("%d\t", grafo[i][j]);
        }
        printf("\n");
    }
}

int buscarDistancia(int cidade1, int cidade2) {
    if (cidade1 >= 0 && cidade1 < NUM_CIDADES && cidade2 >= 0 && cidade2 < NUM_CIDADES) {
        return grafo[cidade1][cidade2];
    } else {
        return 0;
    }
}

int main() {
    for (int i = 0; i < NUM_CIDADES; i++) {
        for (int j = 0; j < NUM_CIDADES; j++) {
            grafo[i][j] = 0;
        }
    }

    inserirDistancia(0, 1, 100);
    inserirDistancia(0, 2, 50);
    inserirDistancia(1, 2, 75);
    inserirDistancia(1, 3, 120);

    printf("Distancia entre cidade 0 e cidade 1: %d\n", buscarDistancia(0, 1));
    printf("Numero de estradas saindo de cidade 1: %d\n", contarEstradas(1));
    imprimirMatriz();

    return 0;
}
