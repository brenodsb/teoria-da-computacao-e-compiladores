#include <stdio.h>
#include <ctype.h>

int somaNaturais(int numero){
    if(numero == 0){
        return 0;
    }
    return numero+somaNaturais(numero-1);
}

int main() {
    int numero = 9;
    int resultado = somaNaturais(numero);
    printf("Resultado: %d", resultado);
    return 0;
}
