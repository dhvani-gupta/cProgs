#include<iostream>
using namespace std;
class distances
{
	float km;
	float m;
	float cm;
	public:
		input()
		{
			cout<<"\n Enter Distance in kilometers: \t";
			cin>>km;
		}
		void friend meters (distances);
		void friend centimeters (distances);
};
void meters(distances d1)
{
	d1.m = d1.km * 0.001;
	cout<<"\n Distance in meters: \t"<<d1.m;
	
}
void centimeters (distances d2)
{
	d2.cm = d2.km * 0.00001;
	cout<<"\n Distance in centimeters: \t"<<d2.cm;
}
int main()
{
	distances d;
	d.input();
	meters(d);
	centimeters(d);
}
