#include<iostream>				//header files
#include<conio.h>
using namespace std;
 main()
{
	int date,month, year;			//variables to get date
	char ch;
	label: std::cout<<"\n  Enter Date: \t"; 
	std::cin>>date;
	if(date>31)						//loop to check validity of date
		{
			cout<<"Invalid!";
			cout<<"Choose again? (y/n)\t:";
			cin>>ch;
			if(ch=='y')
			{
				goto label;		//jump statement
			}
			else
			exit(0);
		}
	label1: cout<<"\n  Enter Month: (enter number) \t";
	cin>>month;
	if(month>12)				// loop to check validity of month number
		{
			cout<<"\t Invalid!";
			cout<<"\n Choose again? (y/n)\t:";
			cin>>ch;
			if(ch=='y')
			{
				goto label1;	
			}
			else
			exit(0);
		}
	if(month==02)				//february cannot have more than 29 days(leap year)
	{
		if(date>29)
		{
			cout<<"\t Invalid!";
			cout<<"\n Choose again? (y/n)\t:";
			cin>>ch;
			if(ch=='y')
			{
				goto label;	
			}
			else
			exit(0);
		}
	}
	if(month==04 || month==06 || month==9 || month==11 ) 	//these months have only 30 days
	{
		if(date>30)
		{
			cout<<"\t Invalid!";
			cout<<"\n Choose again? (y/n)\t:";
			cin>>ch;
			if(ch=='y')
			{
				goto label;	
			}
			else
			exit(0);
		}
	}
	label2: cout<<"\n Enter Year: \t";
	cin>>year;
	if(year>2020) 				//loop to check validity of year (<2020)
		{
			cout<<"\t Invalid!";
			cout<<"\n Choose again? (y/n)\t:";
			cin>>ch;
			if(ch=='y')
			{
				goto label2;	
			}
			else
			exit(0);
		}
	cout<<"\n Entered Date: \t "<<date<<"/"<<month<<"/"<<year;    		// display date
		if(year<=2020)	
		{
			if(month== 02)
		{	
			if(date==29)	
			{
				cout<<"\n Its a leap year feb!";
			}	
				
			if(date>29)
			{
				cout<<"\n Invalid";
			}
		}
		if((year%4)==0)
		{
			cout<<"\n Leap year";
		}	
		cout<<"\n VALID DATE!";
		}
	else
	cout<<"\n Invalid Date!";
	cout<<"\n \n Choose again? (y/n)\t:";
			cin>>ch;
			if(ch=='y')
			{
				goto label;	
			}
			else
			exit(0);
}

