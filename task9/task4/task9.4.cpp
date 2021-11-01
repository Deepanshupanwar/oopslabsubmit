#include <iostream>
using namespace std;
class student{
private:
  string name;
  int age,marks;
public:
  void setdata(string n,int a)
  {
    name=n;
    age=a;
  }
  friend int setmarks(student,int);
  void getdata()
  {
   cout<<"name "<<name<<endl;
   cout<<"age "<<age<<endl;
  }
};
int setmarks(student st,int m)
{
 st.marks=m;
 return st.marks;
}
int main()
{
 student st1,st3,st2;
 st1.setdata("deepanshu",20);
 st2.setdata("aysuh",18);
 st3.setdata("ashutosh",19);
 st1.getdata();
 cout<<"marks "<<setmarks(st1,100)<<endl;
 st2.getdata();
 cout<<"marks "<<setmarks(st2,80)<<endl;
 st3.getdata();
 cout<<"marks "<<setmarks(st3,90)<<endl;

}