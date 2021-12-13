#include<iostream>
using namespace std;
class parent
{
   public:
      void display()
      {
          cout<<"parent class"<<endl;
      }
};
class child_A :public parent
{
    public:
    void display1()
    {
        cout<<"child_A calling from child class"<<endl;
        display();
    }
};
class child_B :public parent
{
   
};
int main()
{
    child_A obj1;
    child_B obj2;
    obj1.display1();
    cout<<"child_B calling from main function"<<endl; 
    obj2.display();
}