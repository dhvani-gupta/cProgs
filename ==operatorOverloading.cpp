#include<iostream>
using namespace std;
class times
{
int hour,minute,second;
public: input()
        {
        	char ch;
			label: std::cout<<"\n  Enter Hour: \t"; 
			std::cin>>hour;
			if(hour>24)						
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
			label1: cout<<"\n  Enter Minutes:  \t";
			cin>>minute;
			if(minute>60)				
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
			label2: cout<<"\n Enter Seconds: \t";
			cin>>second;
			if(second>60) 				
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
        }
output()
	{
		cout<<"\n Entered Time: \t "<<hour<<":"<<minute<<":"<<second;
    }
 times operator ==(times t)
        {
            if(hour == t.hour && minute == t.minute && second == t.second)
                {
					cout<<endl<<"Times are equal";
                }
            else
			 cout<<endl<<"Times are unequal";
		}
};
int main()
{
	times t1,t2;
	t1.input();
	t2.input();
	t1.output();
	t2.output();
	t1==t2; //r1.operator==(r2);

}
