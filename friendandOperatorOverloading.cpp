#include<iostream>
using namespace std;
class complex
{
int x,y;
public:
    input(int a,int b)
    {
    x=a;
    y=b;
    }
    complex ()
    {
        x=0;
        y=0;

    }
    output()
    {
    cout<<endl<<"x="<<x<<endl<<"y="<<y;
    }
    friend complex operator+(complex c, complex d); // friemd function declared
};
    complex operator +(complex c, complex d)
    {
   complex a;
   a.x=c.x+d.x;
   a.y=c.y+d.y;
   return a;
    }
main()
{
complex c1; 
complex c2;   
complex c3;
cout<<"addition on fundamental values="<<endl;
c1.input(1,2);
cout<<endl;
c2.input(3,4);
cout<<endl;
c1.output();
cout<<endl;
c2.output();
cout<<endl;
//c3=c1.add(c2);
c3=c1+c2;

c3.output();
cout<<endl;

}
