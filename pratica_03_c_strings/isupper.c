#include <stdio.h>
#include <ctype.h>

int main() {
    char c = 'B';
    if (isupper(c)) {
        printf("%c eh uma letra maiuscula.\n", c);
    } else {
        printf("%c nao eh uma letra maiuscula.\n", c);
    }
    return 0;
}
