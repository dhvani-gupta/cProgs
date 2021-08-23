#include<iostream>
using namespace std;

struct employee
{
	char name[30];
	int age;
	char designation[50];
	float salary;
	void input()
	{
		cout<<"\n Enter Name: \t";
		cin>>name;
		cout<<"\n Enter age: \t";
		cin>>age;
		cout<<"\n Enter Designation: \t";
		cin>>designation;
		cout<<"\n Enter Salary: \t";
		cin>>salary;
	}
	void output()
	{
		cout<<"\n Name: \t \t"<<name;
		cout<<"\n Age: \t \t"<<age;
		cout<<"\n Designation: \t"<<designation;
		cout<<"\n Salary: \t"<<salary;
	}
};
int main()
{
	employee employees[100];
	int i,n;
	cout<<"\n Enter the number of employees:\t";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"\n For Employee"<<i+1<<endl;
		employees[i].input();
		employees[i].output();
		cout<<endl<<endl;
	}
}
