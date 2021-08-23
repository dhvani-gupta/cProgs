#include<iostream>
using namespace std;
class one;

//declare
class two
{
	int x;
	public:
	input()
	{
		cout<<"enter value of first number:";
		cin>>x;
	}
	output()
	{
		cout<<endl<<"first number is="<<x;
	}
	void friend swap(two, one );
	};
class one
{	
	int y;
	public:
	input()
	{
		cout<<endl<<"enter value of second number: \t";
		cin>>y;
	}
	output()
	{
		cout<<endl<<"second no. is="<<y;
	}
	void friend swap(two, one);
	};

void swap (two t, one o)
{
	cout<<"\n After Swapping!";
	int temp;
	temp =t.x;
	t.x = o.y;
	o.y=temp;
	cout<<"\n First number now is:"<<t.x;
	cout<<"\n Second number now is:"<<o.y;
}


main()
{
one o1;
two t1;
t1.input();
cout<<endl;
t1.output();
o1.input();
cout<<endl;
o1.output();
cout<<endl;
swap(t1,o1);

}
