#include <stdio.h>
#include <ctype.h>

int main() {
    char c = '5';
    if (isdigit(c)) {
        printf("%c eh um digito.\n", c);
    } else {
        printf("%c nao é um digito.\n", c);
    }
    return 0;
}
