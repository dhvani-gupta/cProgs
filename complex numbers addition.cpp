#include<iostream>
#include<conio.h>
using namespace std;
class sample
{
	private:
	int x, y;
	public:
	void getdata ()
	{      
		cout<<"\n Enter value of x and y of complex number: \t";
		cin>>x>>y;  
 	}
	sample add( sample S)
	{
		sample temp;
		temp.x= x+S.x;
		temp.y= y+S.y;
		return temp;
	}
	display ()
	{
		cout<<"Additional of two complex numbers: \t";
		cout<<x<<"i"<<y;
	}
};
main ()
{
	sample obj1, obj2, obj3;
	obj1. getdata ();
	obj2.getdata();
	obj3=obj1.add(obj2);
	obj3.display ();
}
