#include <stdio.h>

int main() {

    double temperaturaC, temperaturaF;
    printf("Informe a temperatura em Celsius: ");
    scanf("%lf", &temperaturaC);
    temperaturaF = (temperaturaC*1.8)+32;
    printf("A temperatura em Fahrenheit eh %.2lf", temperaturaF);

    return 0;
}
