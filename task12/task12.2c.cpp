#include<iostream>
using namespace std;
class A
{
    public:
      int k;
      A(int n)
      {
          k=n;
      }
};
class B:public A
{
    public:
      B(int d):A(d)
      {
         
     }
     void display()
     {
         cout<<"k= "<<k;
     }
 
};
int main()
{
    B objb(20);
    objb.display();
    
}
