#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  ifstream fin;
  fin.open("NOOP.cpp");
    
  char ch;
  int op[5]={0};
  
  while(!fin.eof())
  { 
   fin.get(ch);
   cout<<ch;
   if(ch=='+')
    op[0]=1;
   else if(ch=='*')
    op[1]=1;
   else if(ch=='%')
    op[2]=1;
   else if(ch=='/')
    op[3]=1;
   else if(ch=='-')
    op[4]=1;
  }
  //1+!  
  int count = 0;
  for(int i=0;i<5;i++)
   if(op[i]==1)
    count++;

  cout<<count<<endl;
  fin.close();
  
 return 0;
}
