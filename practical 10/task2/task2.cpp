#include <iostream>
using namespace std;
class student
{
private:
 string name;
 char section;
 int id;
public:
 void set(string n,char s,int i)
 {
  name=n;
  section=s;
  id=i;
 }
 void print()
 {
  cout<<"name "<<name<<endl;
  cout<<"section "<<section<<endl;
  cout<<"id "<<id<<endl;
 }
};

int main()
{
    student obj;
    student* ptr;  
    ptr = &obj;
 
    obj.set("deepanshu",'c',20011);
    ptr->print();  
}
