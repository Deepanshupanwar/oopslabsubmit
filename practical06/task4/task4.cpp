#include<iostream>
using namespace std;
int main()
{
  string s;
  string r;
  getline(cin,s);
  getline(cin,r);
  int a=s.length();
  int b=r.length();
  if(a==b)
  {
     int f=0;
     for(int i=0;i<a;i++)
     {
       if(s[i]==r[i])
       f=0;
       else
       {
         f=1;
         break;
       }
     }
     if(f==0)
         cout<<"strings are equal"<<endl;
     else
         cout<<"strings are not equal"<<endl;  
  }
  else
  {
       cout<<"strings are not equal"<<endl;
  }  
}
