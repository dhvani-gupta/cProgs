#include<iostream>
using namespace std;
union student
{
	char name[40];
	int age;
	int semester;
	float input()
	{
		cout<<"\n Enter name: \t";
		cin>>name;
		cout<<"\n Enter age: \t";
		cin>>age;
		cout<<"\n Enter Semester: \t";
		cin>>semester;
	}
	};
	int main()
	{
		student students[100];
		int n,i;
		float m1,m2,m3,m4,percentage,sum;
		char grade;
		cout<<"\n Enter the number of students:\t";
		cin>>n;
	for(i=0;i<n;i++)
	{
		students[i].input();
		cout<<"\n Enter marks in C++: \t";
		cin>>m1;
		cout<<"\n Enter marks in NM: \t";
		cin>>m2;
		cout<<"\n Enter marks in Pc Hardware: \t";
		cin>>m3;
		cout<<"\n Enter marks in Analog E: \t";
		cin>>m4;
		sum = (m1+m2+m3+m4);
		percentage = sum/4;
		cout<<"Sum: \t"<<sum;
		cout<<"\n Percentage = \t"<<percentage ;
		//cout<<endl<<endl;
		if(percentage >= 90.00)
		{
			grade ='S';
		}
		else if (percentage <= 89.00 && percentage >= 80.00)
		{
			grade = 'A';
		}
		else if (percentage <= 79.00 && percentage >= 70.00)
		{
			grade = 'B';
		}
		else if (percentage <= 69.00 && percentage >= 60.00)
		{
			grade = 'C';
		}
		else if (percentage <= 59.00 && percentage >= 50.00)
		{
			grade = 'D';
		}
		else if (percentage < 50.00)
		{
			grade = 'F';
			cout<<"\n You Failed!";
		}
		cout<<"\n Student Grade: \t "<<grade;
		}
	}	
	

