#include <iostream>
#include <fstream>

using namespace std;

int main()
{
   ifstream fin;
   fin.open("code.c");
   ofstream fout;
   fout.open("test.c");
   char ch;
   
   while(!fin.eof())
   {
     fin.get(ch);
     if(ch!='\n'&&ch!='\t'&&ch!=' ')
     {    
      fout<<ch;
      cout<<ch;
     }
   }
   fin.close();
   fout.close();
 
  return 0;
}
