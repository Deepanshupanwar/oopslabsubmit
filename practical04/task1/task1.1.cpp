#include<iostream>
using namespace std;
namespace first{
void add(int a,int b)
{
 cout<<a+b<<endl;
}
}
namespace second{
void add(float a,float b)
{
   cout<<a+b<<endl;
}
}

int main()
{
 first::add(1,2);
 second::add(1.5,2.5);
return 0;
}
