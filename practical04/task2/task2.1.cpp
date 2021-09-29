#include<iostream>
using namespace std;
namespace first{
void saysomething(){
  cout<<"hello world"<<endl;
}
}
namespace second{
void saysomething(){
  cout<<"hello world 1"<<endl;
}
}
using namespace first;
using namespace second;
int main()
{
  saysomething();
  return 0;
}
