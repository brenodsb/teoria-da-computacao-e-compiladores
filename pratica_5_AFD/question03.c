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
            else if (*entrada == '1')
            {
                estadoAtual = 2; // Vai para q2
            }
            break;

        case 1: // q1
            if (*entrada == '1')
            {
                estadoAtual = 2; // Vai para q2
            }
            break;

        case 2: // q2
            if (*entrada == '1')
            {
                return 1; // Aceita a sequência
            }
            break;
        }

        entrada++;
    } while (*entrada != '\0');

    return 0; // Não aceita a sequência
}

int main()
{
    char entrada[100];
    printf("Digite uma sequencia de 0 e 1: ");
    scanf("%s", entrada);

    if (verificaCadeia(entrada))
        printf("A sequencia '%s' é aceita.\n", entrada);
    else
        printf("A sequencia '%s' nao é aceita.\n", entrada);

    return 0;
}
