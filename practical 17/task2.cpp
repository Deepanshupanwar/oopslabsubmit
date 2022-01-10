#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>&v){
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<"  ";
    cout<<endl;
}
int main(){
    vector<int>v;
    int ele,size,n;
    cout<<"\nEnter the size  ";
    cin>>size;
    for(int i=0;i<size;i++){
        cout<<"\nEnter the element  ";
        cin>>ele;
        v.push_back(ele);
    }
    display(v);
    cout<<"\nResizing the vector  ";
    cout<<"\nEnter the new size of vector ";
    cin>>n;
    v.resize(n,10);
     display(v);
    cout<<"Capacity :"<<v.capacity()<<"\tSize :"<<v.size()<<endl;
    cout<<"Checking whether the list is empty or not :-";
    if(v.empty()==true)
        cout<<"Empty";
    else    
        cout<<"Not Empty";
}