#include <stdio.h>
#include <math.h>

int main() {

    double c1, c2, h;
    printf("Informe o primeiro cateto: ");
    scanf("%lf", &c1);
    printf("Informe o segundo cateto: ");
    scanf("%lf", &c2);
    h = sqrt((c1*c1)+(c2*c2));
    printf("A hipotenusa eh: %.2lf.", h);

    return 0;
}
