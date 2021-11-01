#include <iostream>
using namespace std;
class college{
private:
  string name;
  int age,marks;
public:
  void setdata(string n,int a,int m)
  {
    name=n;
    age=a;
    marks=m;
  }
  void getdata()
  {
   cout<<"name "<<name<<endl;
   cout<<"age "<<age<<endl;
   cout<<"marks "<<marks<<endl;
  }
};
struct student{
string name;
int age;
int marks;
};
int main()
{
 college st;
 st.setdata("deepanshu",20,100);
 st.getdata();
 struct student st1;
 st1.name="ashutosh";
 st1.age=19;
 st1.marks=90;
 cout<<"name "<<st1.name<<endl;
 cout<<"age "<<st1.age<<endl;
 cout<<"marks "<<st1.marks<<endl;
}