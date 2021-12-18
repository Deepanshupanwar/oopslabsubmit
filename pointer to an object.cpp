#include <iostream>

using namespace std;
class xyz
{
    public:
      int x,y,z;
    xyz(int a,int b,int c)
    {
        x=a;
        y=b;
        z=c;
    }
    friend void compare(xyz *a,xyz *b,xyz *c,xyz *d,xyz *e);
};
void compare(xyz *a,xyz *b,xyz *c,xyz *d,xyz *e)
{
    int lx=a->x;
    char m='A';
    if(lx<b->x)
    {
        lx=b->x;
        m='B';
    }
    if(lx<c->x)
    {
        lx=c->x;
        m='C';
    }
    if(lx<d->x)
    {
        lx=d->x;
        m='D';
    }
    if(lx<e->x)
    {
        lx=e->x;
        m='E';
    }
    cout<<"company with highest x is "<<m;
    int ly=a->y;
    char n='A';
    if(ly<b->y)
    {
        ly=b->y;
        n='B';
    }
    if(ly<c->y)
    {
        ly=c->y;
        n='C';
    }
    if(ly<d->y)
    {
        ly=d->y;
        n='D';
    }
    if(ly<e->y)
    {
        ly=e->y;
        n='E';
    }
    cout<<"company with highest y is "<<n<<endl;
    int lz=a->z;
    char t='A';
    if(lz<b->z)
    {
        lz=b->z;
        t='B';
    }
    if(lz<c->z)
    {
        lz=c->z;
        t='C';
    }
    if(lz<d->z)
    {
        lz=d->z;
        t='D';
    }
    if(lz<e->z)
    {
        lz=e->z;
        t='E';
    }
    cout<<"company with highest z is "<<t<<endl;
}
int main()
{
   xyz A(11,12,13),B(10,1,11),C(12,118,17),D(14,10,14),E(11,1,13);
   xyz *a=&A;
    xyz *b=&B;
    xyz *c=&C;
     xyz *d=&D;
      xyz *e=&E;
      compare(a,b,c,d,e);
    return 0;
}
