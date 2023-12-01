%define api.pure

%token INT
%token FLOAT
%token CHAR
%token ID

%%

decl: type ID {
  printf("Declaração de variável encontrada.\n");
}

type: INT {
  printf("Tipo INT encontrado.\n");
}
| FLOAT {
  printf("Tipo FLOAT encontrado.\n");
}
| CHAR {
  printf("Tipo CHAR encontrado.\n");
}

%%
