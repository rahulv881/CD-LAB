%{
 #include <stdio.h>
  int count = 0;
%}

%%
auto|double|int|struct|break|else|long|switch|case|enum|register|typedef|char|extern|return|union|continue|for|signed|void|do|if|static|while|default|goto|sizeof|volatile|const|float|short|unsigned {printf("keyword found at Line %d\n",count);}
[+-/*%=<>!] {printf("Operators Found at Line %d\n",count);}
[a-z\-A-Z]+[a-zA-Z0-9]* {printf("identifiers Found at Line %d\n",count);}
\n {count++;}
[{}:,();] {printf("Separators Found at Line %d\n",count);}
%%
int yywrap()
{
  return 1;
}

int main()
{
  yylex();
  return 0;
}

