#include<iostream>
using namespace std;
int main()
{
int *p = {10,20,20};
cout << *p;
p++;
cout<<*p;
return 0;
}

//Here we didn't allocate memory to the pointer.'p' just acts as a place holder wherein you can store an address.