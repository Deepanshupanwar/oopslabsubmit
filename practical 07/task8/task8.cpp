#include<iostream>
using namespace std;
int main()
{
 for(int i=1;i<=4;i++)
 {
   for(int j=1;j<=4;j++)
   {
     if(j>=i)
       cout<<"*";
   }
   cout<<endl;
 }
}
