#include<iostream>
using namespace std;
int main(){
int x=50;
int y=0;
double z=0;
try{
if(y==0){
throw runtime_error("Math Error: Attempted to divide by zero\n");
}
z = x/y;
}
catch(runtime_error& e){
cout << "Exception Occurred!\n" << e.what();
}
}
