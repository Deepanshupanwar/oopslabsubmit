#include<iostream>
using namespace std;
class base
{
  public:
   virtual void func()=0;
    
};
class child:public base
{
  public:
    void func()
    {
        cout<<"this child function"<<endl;
    }
};
int main()
{
  base *b;
  child c;
  b=&c;
  b->func();
}
//abstraction was implemented on base class with pure virtual function