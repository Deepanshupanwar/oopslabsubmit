#include <iostream>
using namespace std;
class xyz
{
private:
  int a,b;
public:
  xyz(int a,int b)
 {
  this->a=a;
  this->b=b;
 }
  int calculateremainder()
  {
    return a%b;
  }
};

int main()
{
xyz obj(10,3);
cout<< obj.calculateremainder() << endl;
return 0;

}