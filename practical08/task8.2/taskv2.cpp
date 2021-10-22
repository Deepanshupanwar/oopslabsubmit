#include<iostream>
using namespace std;
int main()
{
int arr[] = {10,20,30};
cout <<*arr<<endl;
cout <<arr<<endl;
int *p=arr;
p++;
cout <<*(p)<<endl;
return 0;
}