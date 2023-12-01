%define api.pure

%token NUM
%token ADD
%token SUB
%token MUL
%token DIV

%%

expr: NUM
| expr ADD expr {
  printf("Adi��o encontrada.\n");
}
| expr SUB expr {
  printf("Subtra��o encontrada.\n");
}
| expr MUL expr {
  printf("Multiplica��o encontrada.\n");
}
| expr DIV expr {
  printf("Divis�o encontrada.\n");
}

%%
