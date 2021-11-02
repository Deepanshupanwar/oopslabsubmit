#include <iostream>
using namespace std;
class xyz {
private:
      int num;                   
public:
      xyz(int a) {
         num= a;
      }
      bool operator <(const xyz& d) {
         if(num < d.num) {
            return true;
         }
         if(num == d.num) {
            return true;
         }
         
         return false;
      }
};

int main() {
   xyz obj1(10), obj2(11);
 
   if( obj1 < obj2 ) {
      cout << "obj1 is less than obj2 " << endl;
   } else {
      cout << "obj2 is less than obj1 " << endl;
   }
   
   return 0;
}