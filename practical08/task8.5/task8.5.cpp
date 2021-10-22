#include <iostream>
long int multiplyNumbers(int);
using namespace std;
int fact(int); //function prototype
int main()
{
   int num,factorial;
    cout<<"Enter the number to find factorial\n";
    cin>>num;
    factorial=multiplyNumbers(num);
    cout<<"Fadtorial of "<<num<<" is: "<<factorial;
    return 0;
}
long int multiplyNumbers(int n) {
    if (n>=1)
        return n*multiplyNumbers(n-1);
    else
        return 1;
}