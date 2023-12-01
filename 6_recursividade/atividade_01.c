#include <stdio.h>
#include <ctype.h>

int potencia(int base, int expoente){
    if(expoente == 0){
        return 1;
    }
    return base*potencia(base, expoente-1);
}

int main() {
    int base = 5;
    int expoente = 6;
    int resultado = potencia(base, expoente);
    printf("Resultado: %d", resultado);
    return 0;
}
