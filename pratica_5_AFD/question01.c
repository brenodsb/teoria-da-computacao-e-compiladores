#include <stdio.h>

int verificaCadeia(char *entrada)
{
    int estadoAtual = 0; // Estado inicial q0

    do
    {
        switch (estadoAtual)
        {
        case 0: // q0
            if (*entrada == '0')
            {
                estadoAtual = 1; // Vai para q1
            }
            else
            {
                return 0; // Rejeita se não começa com '0'
            }
            break;

        case 1: // q1
            if (*entrada == '1')
            {
                estadoAtual = 2; // Vai para q2
            }
            else
            {
                return 0; // Rejeita se não segue com '1'
            }
            break;

        case 2: // q2
            if (*entrada == '1')
            {
                estadoAtual = 2; // Permanece em q2
            }
            else if (*entrada == '0')
            {
                estadoAtual = 3; // Vai para q3
            }
            else
            {
                return 0; // Rejeita se não segue com '0' ou '1'
            }
            break;

        case 3: // q3
            if (*entrada == '0' || *entrada == '1')
            {
                return 0; // Rejeita qualquer símbolo após q3
            }
            break;
        }

        entrada++;
    } while (*entrada != '\0');

    return estadoAtual == 3; // Retorna 1 se estiver no estado final q3
}

int main()
{
    char entrada[100]; // Definindo um buffer para a entrada
    printf("Digite a cadeia(numeros, que podem ser 0 ou 1): ");
    scanf("%s", entrada);

    if (verificaCadeia(entrada))
    {
        printf("A cadeia '%s' foi aceita pelo AFD.\n", entrada);
    }
    else
    {
        printf("A cadeia '%s' foi rejeitada pelo AFD.\n", entrada);
    }

    char exemplo[] = "0110";

    if (verificaCadeia(exemplo))
    {
        printf("A cadeia '%s' foi aceita pelo AFD.\n", exemplo);
    }
    else
    {
        printf("A cadeia '%s' foi rejeitada pelo AFD.\n", exemplo);
    }

    return 0;
}
