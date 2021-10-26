#include<iostream>
using namespace std;
class Abc{
private:
 int a;
public:
 Abc(int a)
 {
  this->a=a;
 }
 Abc(const Abc &obj1)
 {
  this->a=obj1.a;
 }
 void display()
 {
  cout<<this->a;
 }
};
int main()
{
Abc obj1(10);
Abc obj2=obj1;
obj2.display();
}
