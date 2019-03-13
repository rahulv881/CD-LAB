#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  fostream fout;
  fout.open("code.c");
//  
  string s;
  while(1)
  {
    cin>>s;
    if(s=="exit")             
    {    
 	cout<<"Error: Unable to create File"<<endl;
        return 0;
    }
  
/*
  Multi Line Comment;
*/
  
  }       

 return 0;
}
