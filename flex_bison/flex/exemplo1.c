#include <stdio.h>

#include "lex.yy.h"

int main(void) {
  yylex();
  return 0;
}

/* Regras léxicas */

%token ADD
%token SUB
%token MUL
%token DIV

%%

/* Regras de ação */

ADD {
  printf("Operador de soma encontrado.\n");
}

SUB {
  printf("Operador de subtração encontrado.\n");
}

MUL {
  printf("Operador de multiplicação encontrado.\n");
}

DIV {
  printf("Operador de divisão encontrado.\n");
}

%%
