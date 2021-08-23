#include<iostream>
using namespace std;
class fd_account
{
	float simpleInterest ,amt;
	char fd_no[20];
	char name[20];
	float maturity_amt;	
	public:
	input()
	{
			cout<<"\n Enter FD NUMBER: \t ";
			cin>>fd_no;
			cout<<"\n Enter name: \t";
			cin>>name;
	} 
		fd_account( float simpleInterest , float amt)
		{
			
			maturity_amt = amt+simpleInterest;
		} 
	output()
	{
		cout<<"\n FD NUMBER: \t \t "<<fd_no;
		cout<<"\n Name: \t \t \t "<<name;
		cout<<"\n \n Maturity Amount = \t"<<maturity_amt;
	}
	
};
int main()
{
	float amt,interest_rate,years;
	float simpleInterest;
	
	cout<<"\n Enter Principal amount: \t";
	cin>>amt;
	cout<<"\n Enter Number of years: \t";
	cin>>years;
	cout<<"\n Enter Rate of Interest: \t";
	cin>>interest_rate;
	simpleInterest = (amt*interest_rate*years)/100;
	fd_account admin(simpleInterest,amt);
	admin.input();
	cout<<"\n Principal amount:  \t"<<amt;
	cout<<"\n Rate of Interest:  \t"<<interest_rate;
	cout<<"\n Number of Years:  \t"<<years;
	admin.output();	
}
