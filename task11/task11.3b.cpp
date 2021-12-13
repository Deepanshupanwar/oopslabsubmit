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
class B:virtual public A
{
    public:
    void display1()
    {
        cout<<"class B"<<endl;
        display();
    }
};
class C:virtual public A
{
    public:
    void display2()
    {
        cout<<"class D"<<endl;
    }
};
class D:public B,public C
{ 
   public:
    void display3()
    {
        cout<<"class D"<<endl;
    } 
};
int main()
{
  D d;
  d.display1();
  d.display2();
  d.display3();
  d.display();
}