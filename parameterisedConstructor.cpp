#include<iostream>
using namespace std;

class item
{
int a,b;
public:  item( int x, int y)   //constructor
{
    a=x;
    b=y;
}
output()        // member function
{

    cout<<"a="<<a<<endl<<"b="<<b;
}
};
main()
{
item i1(10,20);  // object declaration
i1.output();
}
