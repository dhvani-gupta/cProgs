#include<iostream>
using namespace std;

class item
{
	int a,b;
	public:  item()   //constructor 
	{
	}
	output()        // member function
	{
    	cout<<"a="<<a<<endl<<"b="<<b;
	}
};
main()
{
	item i1;  // object declaration
	i1.output();
}
