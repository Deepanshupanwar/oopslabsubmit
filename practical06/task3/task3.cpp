#include<iostream>
#include<string.h>
using namespace std;

int main()
{
   string s;
   string r;
   getline(cin,s);
   int l=s.length();
   for(int i=0;i<=l-1;i++)
   {
      r=r+s[l-i-1];
   }
   cout<<"orignal string "<<s<<endl;
   cout<<"reversed string "<<r<<endl;
   
}

