#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
class Person
{
	char name[20];
	char address[20];
	char  phone_no[10];

	public:
	void Pin()
	{	cout<<"\n Enter Name\t";
		cin>>name;
		cout<<"\nEnter Address\t";
		cin>>address;
		cout<<"\nEnter Phone No\t";
		cin>> phone_no;
	}

	void Pout()
	{
		cout<<"\n Name\t"<<name;
		cout<<"\n Address\t"<<address;
	    cout<<"\n Phone No\t";
		cout<<phone_no;
	}
};

class Employee : public Person
{
	int eno;
	public:
	void Ein()
	{
		Pin();
		cout<<"\nEnter Employee No\t";
		cin>>eno;
    }

	void Eout()
	{
		Pout();
		cout<<"\n Employee No\t";
		cout<<eno;
    }

};

class Manager : public Employee
{
	char designation[20];
	char department[20];
	

	public:
		float salary;
	void Min()
	{
		Ein();
	    cout<<"\nEnter Designation\t";
		cin>>designation;
	    cout<<"\nEnter Department\t";
		cin>>department;
		cout<<"\nEnter Salary\t";
		cin>>salary;
	}

	void Mout()
	{
		Eout();
	    cout<<"\nDesignation\t";
		cout<<designation;
	    cout<<"\nDepartment\t";
		cout<<department;
		cout<<"\nSalary\t";
		cout<<salary;
	}
};

int main()
{	
	
	Manager m[100]; int n;
	float max =0;
	
	cout<<"\n Enter the no of Enteries you want to add\t ";
	cin>> n;
	
	
	for(int k=0;k<n;k++)
	{
		m[k].Min();	
	}	

	for(int j=0;j<n;++j)
	{
		m[j].Mout();
	}
	int temp=0;
        for(int i=1;i<=n;i++)
        {
                if(m[temp].salary<m[i].salary)
                temp=i;
        }
	cout<<"\n Max Salary is: \t"<<m[temp].salary;
	getch();
}
