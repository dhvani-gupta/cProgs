#include<iostream>
using namespace std;
class account
{
	float interest=6.75;
	public:
	float input(int principal,int time)
	{
		this->interest = (principal*interest*time)/100;
		
	}
	float output()
	{
		cout<<"\n Interest = \t"<<interest;
	}
	
};
int main()
{
	account admin;
	char name[20];
	float principal, time;
	cout<<"\n Enter name: \t";
	cin>>name;
	cout<<"\n Enter Principal amount: \t";
	cin>>principal;
	cout<<"\n Enter Number of years: \t";
	cin>>time;
	cout<<"\n Fixed Annual Rate of Interest is 6.75";
	admin.input(principal,time);
	admin.output();
	
}
