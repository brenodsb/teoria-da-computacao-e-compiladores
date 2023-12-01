#include <stdio.h>
#include <stdbool.h>

#define NUM_CIDADES 4

int grafo[NUM_CIDADES][NUM_CIDADES];

void inicializarGrafo() {
    for (int i = 0; i < NUM_CIDADES; i++) {
        for (int j = 0; j < NUM_CIDADES; j++) {
            grafo[i][j] = 0;
        }
    }
}

void inserirAresta(int cidade1, int cidade2, int r) {
    if (cidade1 >= 0 && cidade1 < NUM_CIDADES && cidade2 >= 0 && cidade2 < NUM_CIDADES) {
        grafo[cidade1][cidade2] = r;
    }
}

int calcularComprimentoCaminho(int cidade1, int cidade2) {
    if (cidade1 == cidade2) {
        return 0;
    }

    int comprimento = -1;

    for (int i = 0; i < NUM_CIDADES; i++) {
        if (grafo[cidade1][i] > 0) {
            int proximoComprimento = calcularComprimentoCaminho(i, cidade2);
            if (proximoComprimento >= 0 && (comprimento == -1 || proximoComprimento + grafo[cidade1][i] < comprimento)) {
                comprimento = proximoComprimento + grafo[cidade1][i];
            }
        }
    }

    return comprimento;
}

bool haCiclos() {
    for (int i = 0; i < NUM_CIDADES; i++) {
        if (calcularComprimentoCaminho(i, i) != -1) {
            return true;
        }
    }
    return false;
}

void grauEntrada() {
    for (int i = 0; i < NUM_CIDADES; i++) {
        int grau = 0;
        for (int j = 0; j < NUM_CIDADES; j++) {
            if (grafo[j][i] > 0) {
                grau++;
            }
        }
        printf("Grau de entrada do no %d: %d\n", i, grau);
    }
}

void grauSaida() {
    for (int i = 0; i < NUM_CIDADES; i++) {
        int grau = 0;
        for (int j = 0; j < NUM_CIDADES; j++) {
            if (grafo[i][j] > 0) {
                grau++;
            }
        }
        printf("Grau de saida do no %d: %d\n", i, grau);
    }
}

int main() {
    inicializarGrafo();

    inserirAresta(0, 1, 100);
    inserirAresta(0, 2, 50);
    inserirAresta(1, 2, 75);
    inserirAresta(1, 3, 120);
    inserirAresta(3, 0, 200);

    int cidade1, cidade2;
    printf("Informe as cidades (0 a 3) para calcular o comprimento do caminho: ");
    scanf("%d %d", &cidade1, &cidade2);

    int comprimento = calcularComprimentoCaminho(cidade1, cidade2);
    if (comprimento >= 0) {
        printf("O comprimento do caminho entre cidade %d e cidade %d e %d\n", cidade1, cidade2, comprimento);
    } else {
        printf("Nao ha caminho entre cidade %d e cidade %d\n", cidade1, cidade2);
    }

    if (haCiclos()) {
        printf("O grafo contem ciclos.\n");
    } else {
        printf("O grafo nao contem ciclos.\n");
    }

    grauEntrada();
    grauSaida();

    return 0;
}
