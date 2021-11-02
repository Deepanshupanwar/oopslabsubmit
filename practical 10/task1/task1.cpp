#include<iostream>
using namespace std;
class directory{
private:
  string name,address,head;
  long long int tele,mob;
public:
  void setdetails(string n,string a,string h,long long int t,long long int m)
  {
    name=n,address=a,head=h;
    tele=t,mob=m;
  }
  void print()
  {
    cout<<"name "<<name<<endl;
    cout<<"address "<<address<<endl;
    cout<<"telephone number "<<tele<<endl;
    cout<<"moblie number "<<mob<<endl;
    cout<<"head of the family "<<head<<endl;
  }
};
int main()
{
 string n,a,h;
 long long int t,m;
 directory people[5];
 for(int i=0;i<5;i++)
 {
   cout<<"enter name of person "<<i<<endl;
   cin>>n;
    cout<<"enter address of person "<<i<<endl;
   cin>>a;
    cout<<"enter the name of head of the family "<<endl;
   cin>>h;
    cout<<"enter telephone number of person "<<i<<endl;
   cin>>t;
    cout<<"enter mobile number of person "<<i<<endl;
   cin>>m;
   people[i].setdetails(n,a,h,t,m);
 }
 cout<<endl;
 people[3].print();
}