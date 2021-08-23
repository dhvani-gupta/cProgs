#include<iostream>
using namespace std;
class complex
{
int x,y;
public:
    input()
    {
    cout<<"Enter the Initial Number of people in the bank: \t";
    cin>>x;
    }
output_y()
{
    cout<<endl;
    cout<<"\n Welcome to the Bank!";
    cout<<"\n Now number:"<<x<<endl;
}
output_n()
{
	cout<<endl;
	cout<<"\n Please visit again!";
	cout<<"\n Now number:"<<x<<endl;
}
complex operator ++()
{
	complex temp;
	temp.x= ++x;
//	temp.y= ++y;
	return temp;
}
complex operator --()
{
	complex temp1;
	temp1.x= --x;
	return temp1;
}
};
int main()
{
	char ch;
	complex c1,c2;
	c1.input();
	do {
	cout<<"\n Enter 's' to stop execution";
	cout<<"\n Did a person enter(y) or leave(n) the bank? (y/n) : \t";
	cin>>ch;
	if(ch == 'y')
	{
		c2=++c1;  //c2=c1++;
		cout<<endl;
		c2.output_y();
	}
	else
	if(ch == 'n')
	{
		c2=--c1;  //c2=c1--;
		cout<<endl;
		c2.output_n();
	}
	else
	if(ch == 's')
	{
		cout<<"\n Exited";
	}
	else cout<<"\n Invalid entry!";	
}while (ch != 's' );
}
