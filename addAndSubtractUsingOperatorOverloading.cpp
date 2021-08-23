#include<iostream>
using namespace std;
class company
{
	int number;
	public:
	input()
	{
		cout<<"\n Enter the number: \t";
		cin>>number;		
	}		
	output()
	{
		cout<<"\n Value: \t"<<number;
	}
	company operator +(company c2)
	{
		company temp;
		temp.number = number + c2.number;
		return temp;
	}
	company operator -(company c2)
	{
		company temp;
		temp.number = number - c2.number;
		return temp;
	}
};
int main()
{
	company n1,n2,n3,n4;
	n1.input();
	//n1. output();
	cout<<endl<<endl;
	n2.input();
	//n2.output();
	n3=n1 + n2;
	cout<<endl<<endl;
	n3.output();
	n4 = n1-n2;
	cout<<endl<<endl;
	n4.output();
}
