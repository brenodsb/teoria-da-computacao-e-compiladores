%define api.pure

%token NUM
%token ADD
%token SUB
%token MUL
%token DIV

%%

expr: NUM
| expr ADD expr {
  printf("Adição encontrada.\n");
}
| expr SUB expr {
  printf("Subtração encontrada.\n");
}
| expr MUL expr {
  printf("Multiplicação encontrada.\n");
}
| expr DIV expr {
  printf("Divisão encontrada.\n");
}

%%
