#include<iostream>
using namespace std;

void swap(int &a,int &b)
{
	int temp =a ;
	a=b;
	b=temp;
	cout<<"values inside function"<<endl;
	cout<<"a is="<<a<< " & b is= "<<b<<endl;
}

int main()
{
	int a=10,b=20;
	
	swap(a,b);
	cout<<"values outside function"<<endl;
	cout<<"a is="<<a<< " & b is= "<<b;
}
