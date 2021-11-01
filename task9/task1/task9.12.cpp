#include <iostream>
using namespace std;
#define MAX 10 
class student
{
private:
        char name[30];
        int  rollNo;
        char sec;
public:
        void getDetails(void);
        void putDetails(void);
};
void student :: getDetails(void){
    cout << "Enter name: " ;
    cin >> name;
    cout << "Enter roll number: ";
    cin >>rollNo;
    cout<<"enter the section:";
    cin >>sec;
}
void student :: putDetails(void){
    cout<<"Name:"<<name<<",Roll Number:"<<rollNo<<",section"<<sec<<endl;
}
 
int main()
{
    student std[MAX];
    int n,i;
    cout<<"Enter total number of students:";
    cin>>n;
     
    for(i=0;i<n;i++){
        cout<<"Enter details of student"<<i<<":\n";
        std[i].getDetails();
    }
     
    cout<<endl;
    cout<<"Student details:\n";
    for(i=0;i<n;i++){
        cout<<"Details of student"<<(i+1)<<":\n";
        std[i].putDetails();
    }
    cout<<"total number of students in college"<<n;
    return 0;
}