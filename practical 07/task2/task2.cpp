#include<iostream>
#include<ctime>
using namespace std;
int main()
{
 int ch;
  time_t now = time(0);
  tm *ltm = localtime(&now);
 cout<<"enter the choice :1 year,2 month,3 date"<<endl;
 cin>>ch;
 switch(ch)
 {
   case 1:
      cout<<"year:"<<1900 + ltm->tm_year<<endl;
      break;
   case 2:
      cout<<"month:"<<1 + ltm->tm_mon<<endl;
      break;
   case 3:
      cout<<"day:"<<ltm->tm_mday<<endl;
      break;
   default:
      cout<<"invalid choice"<<endl;
      break;
 }
 return 0;
}
