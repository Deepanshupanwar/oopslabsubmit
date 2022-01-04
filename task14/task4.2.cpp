#include<iostream>
using namespace std;
class base
{
  public:
    base()
    {
        cout<<"constructor of base class"<<endl;
    }
    virtual ~base()
    {
        cout<<"destructor of base class"<<endl;
    }
};
class child:public base
{
  public:
    child()
    {
        cout<<"constructor of child class"<<endl;
    }
    virtual ~child()
    {
        cout<<"destructor of child class"<<endl;
    }
};
int main()
{
    base *b;
    child *c=new child();
    b=c;
    b->~base();
}