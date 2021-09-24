#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  int num,f=0;
  cout<<"enter the number"<<endl;
  cin>>num;
  int n=sqrt(num);
  for(int i=2;i<=n;i++)
  {
    if(num%i==0)
     {
       f=1;
       break;
     }
  }
  if(f==0)
   cout<<"number is prime";
  else
   cout<<"number is not prime";
}