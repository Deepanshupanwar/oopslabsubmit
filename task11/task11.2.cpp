#include<iostream>
using namespace std;
class mammals
{
    public:
    void display1()
    {
        cout<<"i am a mammal"<<endl;
    }
};
class marineAnimal
{
    public:
    void display2()
    {
        cout<<"i am a marine animal"<<endl;
    }
};
class blueWhale:public marineAnimal,public mammals
{
    public:
    void display3()
    {
        cout<<"i belong to both the categories:mammal and marine animal"<<endl;
    }
};
int main()
{
    mammals obj1;
    marineAnimal obj2;
    blueWhale obj3;
    obj1.display1();
    obj2.display2();
    cout<<"from class blueWhale"<<endl;
    obj3.display1();
    obj3.display2();
    obj3.display3();
}