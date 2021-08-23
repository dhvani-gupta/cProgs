#include<iostream>
using namespace std;
class Base
{
int a;
public:input()
{
cout<<"enter a: \t";
cin>>a;
}
show_a()
{
    return a;
}
};
class Derive :private Base
{
public: int b,c;
public: multiply()
{
    input();
    cout<<"value of a *b(5) in derive=";
//cout<<a;
//show_a();
c=b*show_a();
cout<<c;
}
};
main()
{
    Derive d;
    d.b=5;
    //d.input();
    d.multiply();
    //d.show_a();

}
