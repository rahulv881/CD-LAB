#include <iostream>
#include <fstream>

using namespace std;

bool check(string s)
{
  if(!(s[0]=='_'||(s[0]>='a'&&s[0]<='z')||(s[0]>='A'&&s[0]<='Z')))
   return false;
 
  for(int i=0;i<s.length();i++)
   if(!((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')||s[i]=='_'||(s[i]>='0'&&s[i]<='9')))
     return false;

   return true;
}   

map<string,int> loadMap(string s[32])
{
  map<string,int> mp;
  for(int i=0;i<32;i++)
   mp[s]=0;
  
   return mp;
}

int main()
{
    string str[] = {"auto","break","case","char","const","continue","default","do","double","else","enum","extern","float","for","goto","if","int","long","register","return","short","signed","sizeof","sattic","struct","switch","typedef","union", "unsigned","void","volatile","while"};


    string s;
    set<string> keywords;
    ifstream fin;
    int ind,x;

    fin.open("tableOfIdent.txt");
    for(int i=0;i<32;i++)
     keywords.insert(str[i]);  

            	
   
     while(1)
     {
       cin>>s;
       if(s=="exit")
 	break;


       if(keywords.find(s)!=keywords.end())
 	cout<<"It is a keyword, Hence Not an Identifier"<<endl;
      
       if(check(s))
       {
         cout<<"It is a Valid Identifier"<<endl;
         


       else
 	cout<<"It is an Invalid Identifier"<<endl;
     }

 return 0;

} 
       
