#include<iostream>
using namespace std;
class one;
class two
{
	int x;
	int y;
	int z;
	public:
	input()
	{
		cout<<"enter value of x: \t";
		cin>>x;
		cout<<"enter value of y: \t";
		cin>>y;
		cout<<"enter value of z: \t";
		cin>>z;
	}
	output()
	{
		cout<<endl<<"value of x= \t"<<x;
		cout<<endl<<"value of y= \t"<<y;
		cout<<endl<<"value of z= \t"<<z;
	}
	friend int add(two, one);
};
class one
{
	int o;
	int p;
	public:
    input()
    {
    	cout<<endl<<"enter value of o: \t";
    	cin>>o;
    	cout<<endl<<"enter value of p: \t";
    	cin>>p;
    }
    output()
	{
		cout<<endl<<"value of o= \t"<<o;
		cout<<endl<<"value of p= \t"<<p;
	}
	friend int add(two, one);
};
int add(two t1, one o1)
{
	float average;
	average=(t1.x + t1.y + t1.z + o1.o +o1.p)/5;
	cout<<"\n Average = \t"<<average;
}
int main()
{
	two object2;
	one object1;
	object2.input();
	cout<<endl;
	object2.output();
	cout<<endl;
	object1.input();
	cout<<endl;
	object1.output();
	add(object2,object1);

}
