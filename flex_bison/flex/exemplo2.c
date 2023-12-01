#include <stdio.h>

#include "lex.yy.h"

int main(void) {
  yylex();
  return 0;
}

/* Regras léxicas */

%token IF
%token ELSE
%token FOR
%token WHILE
%token DO
%token INT
%token CHAR
%token FLOAT
%token DOUBLE
%token RETURN

%%

/* Regras de ação */

IF {
  printf("Palavra reservada IF encontrada.\n");
}

ELSE {
  printf("Palavra reservada ELSE encontrada.\n");
}

FOR {
  printf("Palavra reservada FOR encontrada.\n");
}

WHILE {
  printf("Palavra reservada WHILE encontrada.\n");
}

DO {
  printf("Palavra reservada DO encontrada.\n");
}

INT {
  printf("Palavra reservada INT encontrada.\n");
}

CHAR {
  printf("Palavra reservada CHAR encontrada.\n");
}

FLOAT {
  printf("Palavra reservada FLOAT encontrada.\n");
}

DOUBLE {
  printf("Palavra reservada DOUBLE encontrada.\n");
}

RETURN {
  printf("Palavra reservada RETURN encontrada.\n");
}

%%
