#include <stdio.h>
#include <ctype.h>

int main() {
    char c = 'b';
    if (islower(c)) {
        printf("%c eh uma letra minuscula.\n", c);
    } else {
        printf("%c nao eh uma letra minuscula.\n", c);
    }
    return 0;
}
