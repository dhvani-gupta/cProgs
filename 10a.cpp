#include<iostream>
using namespace std;
class account
{
	char name[40];
	char acc_no[15];
	char acc_type[10];
public: input()
{
    cout<<"Enter Name : \t";
    cin>>name;
    cout<<"Enter Account number : \t";
    cin>>acc_no;
    cout<<"Enter Account type (Recurring/savings) : \t";
    cin>>acc_type;
}
};
class check_balance : public account
{
float deposit , time,rate,simpleInterest , finalamount;
public:  get_deposit()
    {
	cout<<endl<<"Enter value of deposit: \t";
	cin>>deposit;
	cout<<endl<<"Enter value of time: \t";
	cin>>time;
	cout<<endl<<"Enter value of rate: \t";
	cin>>rate;
    }
	si()
	{
	simpleInterest = (deposit*rate*time)/100;
	finalamount = deposit + simpleInterest;
//cout<<c;
	}
display()
{
cout<<"\n Details :\n ";

cout<<"Deposited amount= "<<deposit<<"\t Simple Interest "<<simpleInterest<<" \t Final Amount "<<finalamount;
}
};
main()
{

    check_balance customer;
    customer.input();
    customer.get_deposit();
    customer.si();
    customer.display();

}
