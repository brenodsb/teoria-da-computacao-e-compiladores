#include <stdio.h>

#include "lex.yy.h"

int main(void) {
  yylex();
  return 0;
}

/* Regras l�xicas */

%token ADD
%token SUB
%token MUL
%token DIV

%%

/* Regras de a��o */

ADD {
  printf("Operador de soma encontrado.\n");
}

SUB {
  printf("Operador de subtra��o encontrado.\n");
}

MUL {
  printf("Operador de multiplica��o encontrado.\n");
}

DIV {
  printf("Operador de divis�o encontrado.\n");
}

%%
