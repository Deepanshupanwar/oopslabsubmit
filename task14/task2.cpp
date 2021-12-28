#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream myfile;
    myfile.open("example.txt");
    string data;
    getline(myfile,data);
    cout<<data;
    myfile.close();
    return 0;
}