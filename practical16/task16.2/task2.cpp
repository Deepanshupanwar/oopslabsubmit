#include <iostream>
using namespace std;
int main()
{
    int a;cin>>a;
 try {
 throw 'a';
 }
 catch (int x) {
 cout << "Caught " << x;
 }
 catch (...) {
 cout << "Default Exception\n";
 }
 return 0;
}
/*it will print default exception because catch(...) is special catch block which catches all exception 
,since there is no catch statement for char a.*/