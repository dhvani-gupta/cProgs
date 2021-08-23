#include<iostream>
using namespace std;
class complex
{
int x,y;
public:
    input()
    {
    cout<<"Enter values of x and y: \t";
    cin>>x>>y;
    }
    output()
    {
    cout<<endl<<"x="<<x<<endl<<"y="<<y;
    }
    complex add(complex c)
    {
    complex temp;
    temp.x=x+c.x;
    temp.y=y+c.y;
    return temp;
    }
};
main()
{

complex c1,c2,c3;
c1.input();
cout<<endl;
c2.input();
cout<<endl;
c1.output();
cout<<endl;
c2.output();
cout<<endl;
c3=c1.add(c2);
cout<<endl;
c3.output();
}
