#include<iostream>
using namespace std;
class base
{
  public:
    ~base()
    {
        cout<<"destructor of base class"<<endl;
    }
};
class child:public base
{
  public:
    ~child()
    {
        cout<<"destructor of child class"<<endl;
    }
};
int main()
{
    base *b;
    child c;
    b=&c;
    b->~base();
}