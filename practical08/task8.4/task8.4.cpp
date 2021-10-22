#include <iostream>
using namespace std;
int fact(int); //function prototype
int main()
{
   int num,factorial;//declare essential variable as int
    cout<<"Enter the number to find factorial\n";
    cin>>num;
    factorial=fact(num);//call the fact function
    cout<<"Fadtorial of "<<num<<" is: "<<factorial;
    return 0;
}
int fact(int num)
{
    int i,f=1;
    for(i=1; i<=num; i++)
        f=f*i;//find factorial using for loop
    return(f);
}