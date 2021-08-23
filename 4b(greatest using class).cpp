#include<iostream>
using namespace std;
class numbers
{
	int x;
	int y;
	public:
		input()
		{
			cout<<"\n Enter First number: \t";
			cin>>x;
			cout<<"\n Enter Second number: \t";
			cin>>y;
		}
		output()
		{
			cout<<"\n First number is :"<<x;
			cout<<"\n Second Number is :"<<y;
		}
		void friend greatest (numbers);
};
void greatest(numbers n)
{
	if(n.x>n.y)
	{
		cout<<"\n Greatest is: \t "<<n.x;
	}
	else 
	if(n.y>n.x)
	{
		cout<<"\n Greatest is: \t"<<n.y;
	} 
	else if (n.x==n.y)
	{
		cout<<"\n Both are equal";
	}
}
int main()
{
	numbers n1;
	n1.input();
	n1.output();
	greatest(n1);
}
