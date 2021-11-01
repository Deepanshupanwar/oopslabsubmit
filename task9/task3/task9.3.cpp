
#include<iostream>
using namespace std;
class count
{
public:
int c;
count()
{
c=0;
}
void call()
{
cout<<"\nfunction called";
c++;
}
void callCount()
{
cout<<"\nFunction Called "<<c<<" times ";
}
};
int main()
{
count obj1,obj2,obj3;
obj1.call();
obj1.call();
cout<<"\n obj1";
obj1.callCount();
obj2.call();
cout<<"\n obj2";
obj2.callCount();
cout<<"\n obj3";
obj3.callCount();
return 0;
}