#include<iostream>
using namespace std;
class shape
{
	public:
	double area1;
	double area2;
	double area3;
	float length;
	float breadth;
	
	getdata()
	{
		cout<<"\n Enter Dimensions : \t";
		cin>>length>>breadth;
	}
	virtual display_area()
{
	cout<<"\n Dimensions = \t"<<length<<"\t"<<breadth;
}
	
};
class rectangle : public shape
{
	public: display_area()
	{
		area1 = length*breadth;
		cout<<"\n Area of rectangle: \t"<<area1;
	}
};
class triangle : public shape
{
	public: display_area()
	{
		area2 = 0.5 *length*breadth;
		cout<<"\n Area of triangle: \t"<<area2;
	}
};
class circle : public shape
{
	public: display_area()
	{
		area3 = 3.14* length;
		cout<<"\n Area of circle: \t"<<area3;
	}
};
int main()
{
	shape s;
	shape *p1;
	shape *p2;
	shape *p3;
	rectangle r1;
	triangle t1;
	circle c1;
	p1= &r1;
	p2 = &t1;
	p3 = &c1;
	//s.getdata();
	//s.display_area();
	cout<<"\n For Rectangle \n";
	p1->getdata();
	p1->display_area();
	cout<<"\n For Triangle \n";
	p2->getdata();
	p2->display_area();
	cout<<"\n For Circle (enter the second dimension as 1) \n";
	p3->getdata();
	p3->display_area();
}
/
