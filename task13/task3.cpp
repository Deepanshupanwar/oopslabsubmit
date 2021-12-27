#include<iostream>
using namespace std;
class base
{
  public:
    void func1()
    {
        cout<<"this parent function 1"<<endl;
    }
    virtual void func2()
    {
        cout<<"this parent function 2"<<endl;
    }
};
class child:public base
{
  public:
    void func1()
    {
        cout<<"this child function 1"<<endl;
    }
    void func2()
    {
        cout<<"this child function 2"<<endl;
    }
};
int main()
{
  base *b;
  child c;
  b=&c;
  b->func1();//compile time or early binding
  b->func2();//run time or late binding
}