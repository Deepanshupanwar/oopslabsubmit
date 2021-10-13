#include<iostream>
using namespace std;
int main()
{
 int ch;
 cout<<"enter the choice :1 year,2 month,3 date"<<endl;
 cin>>ch;
 switch(ch)
 {
   case 1:
      cout<<"2021"<<endl;
      break;
   case 2:
      cout<<"october"<<endl;
      break;
   case 3:
      cout<<"wed 13"<<endl;
      break;
   default:
      cout<<"invalid choice"<<endl;
      break;
 }
 return 0;
}
