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
using namespace first;
using namespace second;
int main()
{
 add(1.5f,2.5f);
return 0;
}
