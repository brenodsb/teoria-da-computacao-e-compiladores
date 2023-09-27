#include <stdio.h>
#include <ctype.h>

int main() {
    char c = 'x';
    if (isalnum(c)) {
        printf("%c eh uma letra ou um digito.\n", c);
    } else {
        printf("%c nao eh uma letra ou um digito.\n", c);
    }
    return 0;
}
