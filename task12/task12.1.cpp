#include<iostream>
using namespace std;
class parent1
{
   protected:
     int k;
    void display()
     {
         cout<<"k = "<<k<<" from parent1 class"<<endl;
     }
};
class child1:protected parent1
{
     public :
      int a;
      void display1()
      {
         k=a;
         display();
      }
};
class parent2
{
   private:
     int j;
   public:
    void display(int n)
     {
         j=n;
         cout<<"j = "<<j<<" from parent2 class"<<endl;
     }
};
class child2:private parent2
{
     public :
      int a;
      void display2()
      {
         display(a);
      }
};
int main()
{
    child1 obj1;
    obj1.a=10;
    obj1.display1();
    child2 obj2;
    obj2.a=20;
    obj2.display2();
}
