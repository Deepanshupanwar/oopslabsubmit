#include<iostream>
using namespace std;
int main()
{
  string s;
  getline(cin,s);
  cout<<"original string :"<<s<<endl;
  cout<<"address :"<<&s<<endl;
  s[0]='j';
  cout<<"new string :"<<s<<endl;
  cout<<"address :"<<&s<<endl;
}
