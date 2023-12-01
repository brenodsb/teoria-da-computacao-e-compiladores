#include <stdio.h>

int main() {

    int n1, n2, n3, media;
    printf("Informe a primeira nota: ");
    scanf("%d", &n1);
    printf("Informe a segunda nota: ");
    scanf("%d", &n2);
    printf("Informe a terceira nota: ");
    scanf("%d", &n3);
    media = (n1+n2+n3)/3;
    printf("Media: %d", media);

    return 0;
}
