#include <iostream>
using namespace std;
int division(int a, int b) {
try{
if( b == 0 ) {
throw "Division by zero condition!";
}
}
catch (const char* msg){
throw;
}
return (a/b);
}
int main () {
int x = 50;
int y = 0;
int z = 0;
try {
z = division(x, y);
cout << z << endl;
} catch (const char* msg) {
cerr << msg << endl;
}
return 0;
}