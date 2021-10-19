#include<iostream>
using namespace std;
int main()
{
 int arr[3][3];
   cout<<"enter the element"<<endl;
   for(int i=0;i<3;i++)
   {
    for(int j=0;j<3;j++)
     {
        cin>>arr[i][j];
     }
   }
int i=0,j=0,m=2,n=2;
while(i!=1||j!=1)
{
  int temp=arr[i][j];
  arr[i][j]=arr[m][n];
  arr[m][n]=temp;
   if(j==2)
  {
   i++;
   m--;
   n=2;
   j=0;
  }
  j++;
  n--;
}
cout<<endl;
 for(int i=0;i<3;i++)
   {
    for(int j=0;j<3;j++)
     {
        cout<<arr[i][j]<<" ";
     }
     cout<<endl;
   }
return 0;
}