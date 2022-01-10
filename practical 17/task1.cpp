#include<iostream>
#include<list>
using namespace std;
void display(list<int>&lst){
    list<int>::iterator it;
    for(it=lst.begin();it!=lst.end();it++)
        cout<<*it<<"  ";
}

int main(){
    list<int>list1;
    list1.push_back(5);
    list1.push_back(3);
    list1.push_back(547);
    list1.push_back(1);
    cout<<"The elements of list are :-  ";
    display(list1);
    int a=list1.size();
    cout<<"\nThe size of the list is "<<a;
    cout<<"\nThe sorted list is :-  ";
    list1.sort();
    display(list1);
    cout<<"\nThe reversed list is :-  ";
    list1.reverse();
    display(list1);
}