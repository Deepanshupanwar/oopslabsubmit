#include<iostream>
#include<string>
using namespace std;
class Student
{
private:
       string studentName;
       int studentRoll;
       int studentPhone;
       string studentAddress;
public:
    void setDetails(string name,int roll,int phone,string address);
    void getDetails()
    {
        cout<<studentName<<endl;
        cout<<studentRoll<<endl;
        cout<<studentPhone<<endl;
        cout<<studentAddress<<endl;
    }
};
void Student :: setDetails(string name,int roll,int phone,string address)
    {
        studentName=name;
        studentRoll=roll;
        studentPhone=phone;
        studentAddress=address;
    }
int main()
{
   Student student1;
   Student student2;
   student1.setDetails("Sam",2323,0722725016,"clement town");
   student2.setDetails("John",1234,0734674017,"raipur");
   student1.getDetails();
   student2.getDetails();

return 0;
}