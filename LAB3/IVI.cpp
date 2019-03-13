%
  #include <stdio.h>

  int count=1;
%}

%%
\n {count++;}
void {printf("%s Found at Line %d\n",yytext,count);}
int {printf("%s Found at Line %d\n",yytext,count);}
char {printf("%s Found at Line %d\n",yytext,count);}
float {printf("%s Found at Line %d\n",yytext,count);}
do {printf("%s Found at Line %d\n",yytext,count);}
while {printf("%s Found at Line %d\n",yytext,count);}
if {printf("%s Found at Line %d\n",yytext,count);}
else {printf("%s Found at Line %d\n",yytext,count);}
then {printf("%s Found at Line %d\n",yytext,count);}
break {printf("%s Found at Line %d\n",yytext,count);}
continue {printf("%s Found at Line %d\n",yytext,count);}
switch {printf("%s Found at Line %d\n",yytext,count);}
case {printf("%s Found at Line %d\n",yytext,count);}
print {printf("%s Found at Line %d\n",yytext,count);}
long {printf("%s Found at Line %d\n",yytext,count);}
double {printf("%s Found at Line %d\n",yytext,count);}
using {printf("%s Found at Line %d\n",yytext,count);}
namespace {printf("%s Found at Line %d\n",yytext,count);}
main {printf("%s Found at Line %d\n",yytext,count);}
return {printf("%s Found at Line %d\n",yytext,count);}
default {printf("%s Found at Line %d\n",yytext,count);}
. {}
%%
int yywrap()
{
  return 1;
}

int main(int argc,char *argv[])
{
  yylex();
  return 0;
}
