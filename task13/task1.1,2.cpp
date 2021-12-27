#include<iostream>
using namespace std;
class base
{
 public:
 int add(int a,int b)
 {
     return (a+b);
 }
 float add(float a,float b)
 {
     return (a+b);
 }
};
class child:public base
{
 public:
 int add(int a,int b)
 {
     return (a+b+1);
 }
 float add(float a,float b)
 {
     return (a+b+1);
 }
};
int main()
{
    child c;
    cout<<c.add(2,3)<<endl;
    cout<<c.add((float)2.0,(float)7.0);
}
//child class can't see the add funtion of int and float return type of base class.