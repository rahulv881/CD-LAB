#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  ifstream fin;
  fin.open("code.c");
 
  int op[2] = {0};
  char c,p;
  bool prev = false;

  while(!fin.eof())
  {
    p = c;
    fin.get(c);
    
    cout<<c;
    if(p=='/'&&c=='/') 
     op[0] = 1;
    else if(p=='/'&&c=='*')
     prev = true;
    else if(p=='*'&&c=='/'&&prev)
     op[1] = 1;
    
//    if(op[0]==1&&op[1]==1)
//     break;
  }

  if(op[0]==1)
   cout<<"Single Line Comment Found"<<endl;
  if(op[1]==1)
   cout<<"Multi Line Comment Found"<<endl;

  fin.close();
 
 return 0;
}
  
