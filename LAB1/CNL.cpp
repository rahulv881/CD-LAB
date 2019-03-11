#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  ifstream fin;
  fin.open("code.c");
  
  if(fin==NULL)
  {
     cout<<"Error: Unable to create File"<<endl;
     return 0;
  }
  string s;
  int count=0;
  while(!fin.eof())
  {
    getline(fin,s);
    cout<<s<<endl;
    count++;
  }
  cout<<count<<endl;
 return 0;
}
