#include<iostream>
#include<string.h>
using namespace std;

int main()
{
 string a;
 getline(cin,a); 
 int l=a.length();
 int f=0;
 for(int i=0;i<=(l/2)-1;i++)
 {
     if(a[i]==a[l-i-1])
       f=0;
     else
     {
         f=1;
         cout<<"not a palindrome sring"<<endl;
         break;
     }
 }
 if(f==0)
  cout<<"a palindrome sring"<<endl;

    return 0;
}
