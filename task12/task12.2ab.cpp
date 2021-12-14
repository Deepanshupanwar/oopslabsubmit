#include<iostream>
using namespace std;
class A
{
    public:
      A()
      {
          cout<<"constructor A"<<endl;
      }
      ~A() {
      cout<<"Destructor A"<<endl;
   }
};
class B:public A
{
    public:
      B()
      {
          cout<<"constructor B"<<endl;
      }
       ~B() {
      cout<<"Destructor B"<<endl;
   }
};
class C:public B
{
    public:
      C()
      {
          cout<<"constructor C"<<endl;
      }
       ~C() {
      cout<<"Destructor C"<<endl;
   }
};
int main()
{
    C objc;
}
