#include <iostream>
using namespace std;
class Area
{
public:
    static void print_area(int l, int b)
    {
        cout << "area of rectangle "<<l*b << endl;
    }

    static void print_area(int s)
    {
        cout << "area of square "<<s*s << endl;
    }
};

int main()
{
    Area::print_area(7);
    Area::print_area(7,8);
    return 0;
}                         