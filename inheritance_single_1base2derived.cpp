#include<iostream>
using namespace std;
class account
{
	char name[40];
	char acc_no[15];
public: input()
{
    cout<<endl<<"Enter Name : \t";
    cin>>name;
    cout<<"\n Enter Account number : \t";
    cin>>acc_no;
}
};
//current account
class current_account : public account
{
float deposit , time,rate,simpleInterest , finalamount;
public:  get_deposit()
    {
   	cout<<"\n For Your Current Account";
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
//savings account
class savings_account : public account
{
float deposit , time,rate,simpleInterest , finalamount;
public:  get_deposit_s()
    {
    cout<<"\n For Your Savings Account";
	cout<<endl<<"Enter value of deposit: \t";
	cin>>deposit;
	cout<<endl<<"Enter value of time: \t";
	cin>>time;
	cout<<endl<<"Enter value of rate: \t";
	cin>>rate;
    }
	si_s()
	{
	simpleInterest = (deposit*rate*time)/100;
	finalamount = deposit + simpleInterest;
//cout<<c;
	}
display_s()
{
cout<<"\n Details :\n ";

cout<<"Deposited amount= "<<deposit<<"\t Simple Interest "<<simpleInterest<<" \t Final Amount "<<finalamount;
}
};
//recurring account
class recurring_account : public account
{
float deposit , time,rate,simpleInterest , finalamount;
public:  get_deposit_r()
    {
    cout<<"\n For Your Recurring Account";
	cout<<endl<<"Enter value of deposit: \t";
	cin>>deposit;
	cout<<endl<<"Enter value of time: \t";
	cin>>time;
	cout<<endl<<"Enter value of rate: \t";
	cin>>rate;
    }
	si_r()
	{
	simpleInterest = (deposit*rate*time)/100;
	finalamount = deposit + simpleInterest;
//cout<<c;
	}
display_r()
{
cout<<"\n Details :\n ";

cout<<"Deposited amount= "<<deposit<<"\t Simple Interest "<<simpleInterest<<" \t Final Amount "<<finalamount;
}
};
main()
{
	char acc_type;
    current_account customer;
    savings_account cust;
    recurring_account custm;
    customer.input();
    customer.get_deposit();
    customer.si();
    customer.display();
    cout<<"\n Enter Account type (Recurring (R)/savings (S)) : \t";
    cin>>acc_type;
    if(acc_type == 'S'|| acc_type == 's' )
	{
		cust.get_deposit_s();
    	cust.si_s();
    	cust.display_s();	
	}
	else 
	if(acc_type =='R' || acc_type == 'r')
	{
    	custm.get_deposit_r();
    	custm.si_r();
    	custm.display_r();	
	}
	else 
	{
		cout<<"\n Invalid choice!";
	}  

}

