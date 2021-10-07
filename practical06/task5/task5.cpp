#include<iostream>
using namespace std;
int main()
{
  string s;
  string r;
  getline(cin,s);
  getline(cin,r);
  
  int a=s.compare(r);
  cout<<a<<endl;
}
