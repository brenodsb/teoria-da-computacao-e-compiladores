#include <stdio.h>
#include <string.h>

// Estados do AFD
typedef enum
{
    L0,
    L1,
    L2
} Estado;

// Tamanho máximo da entrada
#define MAX_TAMANHO 100

// Tabela de transição
const int transicoes[3][2] =
    {
        {L1, L1},
        {L2, L2},
        {L2, L2}};

// Função para calcular a transição
Estado fazerTransicao(Estado estadoAtual, char caractere)
{
    if (caractere >= 'a' && caractere <= 'b')
    {
        return transicoes[estadoAtual][caractere - 'a'];
    }
    else
    {
        return -1; // Caractere inválido
    }
}

// Função para imprimir o resultado
void imprimirResultado(Estado estadoFinal)
{
    if (estadoFinal == L2)
    {
        printf("AFD valido.\n");
    }
    else
    {
        printf("AFD invalido.\n");
    }
}

int main()
{
    char entrada[MAX_TAMANHO];
    printf("Digite uma sequencia de 'a's e 'b's:\n");

    if (scanf("%99s", entrada) != 1)
    {
        printf("Erro ao ler a entrada.\n");
        return 1;
    }

    Estado estadoAtual = L0;

    for (size_t i = 0; i < strlen(entrada); i++)
    {
        estadoAtual = fazerTransicao(estadoAtual, entrada[i]);
        if (estadoAtual == -1)
        {
            printf("AFD invalido devido a um caractere nao reconhecido.\n");
            return 0;
        }
    }

    imprimirResultado(estadoAtual);

    return 0;
}
