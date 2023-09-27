#include <stdio.h>
#include <ctype.h>

int main() {
    char c = 'A';
    if (isalpha(c)) {
        printf("%c eh uma letra.\n", c);
    } else {
        printf("%c nao eh uma letra.\n", c);
    }
    return 0;
}
