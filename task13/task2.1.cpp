#include<iostream>
using namespace std;
class base
{
  public:
   virtual void func()
    {
        cout<<"this parent function"<<endl;
    }
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