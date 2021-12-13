#include<iostream>
using namespace std;
class A
{
   public:
      void display()
      {
        cout<<"class A"<<endl;
      }
};
class B:public A
{
    public:
    void display1()
    {
        cout<<"class B"<<endl;
        display();
    }
};
class C:public B,public A
{ 
   public:
    void display2()
    {
        cout<<"class C"<<endl;
    } 
};
int main()
{
  C c;
  c.display();
  c.display1();
  c.display2();
}