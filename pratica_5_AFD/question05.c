#include <stdio.h>
#include <string.h>

// Definition of states
enum State
{
    q0,
    q1
};

// Function to check if the word is accepted
int isAccepted(char *entrada)
{
    enum State estadoAtual = q0;

    do
    {
        char symbol = *entrada;

        switch (estadoAtual)
        {
        case q0:
            if (symbol == '0')
                estadoAtual = q1;
            else if (symbol == '1')
                estadoAtual = q1;
            else
                return 0; // Invalid input character
            break;
        case q1:
            if (symbol == '0')
                estadoAtual = q0;
            else if (symbol == '1')
                estadoAtual = q0;
            else
                return 0; // Invalid input character
            break;
        }

        entrada++;
    } while (*entrada != '\0');

    return estadoAtual == q0;
}

int main()
{
    // Usage examples

    char palavra[100] = "";
    char word1[100] = ""; // Empty word

    printf("Digite uma string: ");
    scanf("%s", &palavra);

    strcpy(word1, palavra);

    if (isAccepted(word1))
        printf("%s aceita\n", word1);
    else
        printf("%s rejeitada\n", word1);

    return 0;
}
