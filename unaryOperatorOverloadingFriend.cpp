#include<iostream>
using namespace std;
class complex
{
int x,y;
public:
        setvalue(int a, int b)
        {
        x=a;
        y=b;
        }
        getvalue()
        {
        cout<<endl<<"x="<<x<<endl<<"y="<<y;
        }
  friend complex operator-(complex );

};
        complex operator-(complex c)
        {
        complex temp;
        temp.x= -c.x;
        temp.y= -c.y;
        return temp;
        }

main()
{
complex c1,c2;
c1.setvalue(-10,-20);
cout<<endl;
c1.getvalue();
c2=-c1; 
c2.getvalue();
}
