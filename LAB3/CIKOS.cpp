%{
  #include <stdio.h>
  int ocount=0,icount=0,scount=0,kcount;
%}

%%
auto|break|case|char|const|continue|default|do|double|else|enum|extern|float|for|goto|if|int|long|register|return|short|signed|sizeof|static|struct|switch|typedef|union|unsigned|void|volatile|while {kcount;}
[+-/*=%] {ocount++;}
(_?a-zA-Z)+[a-zA-Z0-9]* {icount++;}
[{};] {scount++;} 

%%

int yywrap()
{
  return 1;
}

int main()
{
  yylex();
  printf("Operator Count = %d\n",ocount);
  printf("Identifier Count = %d\n",icount);
  printf("Separator Count = %d\n",scount);
  printf("Keyword Count = %d\n",kcount);

  return 0;
}
