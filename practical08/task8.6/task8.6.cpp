#include<iostream>
#include<cmath>
long int series(int);
int t=1;
using namespace std;
int main()
{
    int num,sum;
    cout<<"Enter the number\n";
    cin>>num;
    sum=num*series(num);
    cout<<sum<<endl;
    return 0;
}
long int series(int n){
    if (n>1)
  {
     t=t*(pow(n-1,n-1)+(n-1));
     return series(n-1);
  }
    else
        return t;
}