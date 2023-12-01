#include <stdio.h>

int verificaCadeia(char *entrada)
{
    int estadoAtual = 0; // Estado inicial q0

    do
    {
        switch (estadoAtual)
        {
        case 0: // q0
            if (*entrada == 'a')
            {
                estadoAtual = 1; // Vai para q1 após ler 'a' sem 'a' anterior
            }
            else if (*entrada == 'b')
            {
                estadoAtual = 0; // Permanece em q0 após ler 'b'
            }
            break;

        case 1: // q1
            if (*entrada == 'a')
            {
                return 0; // Rejeita se houver 'aa' consecutivos
            }
            else if (*entrada == 'b')
            {
                estadoAtual = 0; // Permanece em q0 após ler 'b'
            }
            break;
        }

        entrada++;
    } while (*entrada != '\0');

    return estadoAtual == 0; // Aceita se não tiver 'aa' consecutivos em nenhum momento
}

int main()
{
    char entrada[100]; // Definindo um buffer para a cadeia
    printf("Digite a cadeia a ser verificada: ");
    scanf("%s", entrada);

    if (verificaCadeia(entrada))
    {
        printf("A cadeia '%s' foi aceita pelo AFD.\n", entrada);
    }
    else
    {
        printf("A cadeia '%s' foi rejeitada pelo AFD.\n", entrada);
    }

    return 0;
}
