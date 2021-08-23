// overloading of - and *
#include<iostream>
using namespace std;
class complex
{
int x,y;
public:
    input()
    {
    	cout<<"Enter values: \t";
    	cin>>x>>y;
    }
    output()
    {
    	cout<<endl<<"x= \t"<<x<<endl<<"y= \t"<<y;
    }
    complex operator -(complex c)
    {
    	complex temp;
    	temp.x=x-c.x;
    	temp.y=y-c.y;
    	return temp;
    }
    complex operator *(complex c)
    {
    	complex temp;
    	temp.x=x*c.x;
    	temp.y=y*c.y;
    	return temp;
    }
};
main()
{
	complex c1,c2,c3;
	//int no1=2;
	//int no2=4;
	c1.input();
	cout<<endl;
	c2.input();
	cout<<endl;
	c1.output();
	cout<<endl;
	c2.output();
	cout<<endl;
	//c3=c1.add(c2);
	c3=c1-c2;
	cout<<endl;
	c3.output();
	c3=c1*c2;
	cout<<endl;
	c3.output();
}
