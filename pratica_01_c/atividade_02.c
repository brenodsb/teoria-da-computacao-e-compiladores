#include <stdio.h>

int main() {

    int anoN, anoA;
    printf("Informe seu ano de nascimento: ");
    scanf("%d", &anoN);
    printf("Informe o ano atual: ");
    scanf("%d", &anoA);
    printf("Voce tem %d anos de idade.\n", anoA-anoN);
    printf("Em 2050 voce vai ter %d anos de idade.\n", 2050-anoN);

    return 0;
}
