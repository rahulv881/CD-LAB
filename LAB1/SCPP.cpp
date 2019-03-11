#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
  ofstream fout;
  fout.open("code.c");
  if(fout==NULL)
  {
     cout<<"Error: Unable to create File"<<endl;
     return 0;
  }

  string s;
  cout<<"Type exit to quit"<<endl;
  while(1)
  {
     getline(cin,s);
	 if(s=="exit")
      break;
     fout<<s<<endl;
  }

 cout<<"File Created Successfully")<<endl;
 fout.close();
 return 0;

}
