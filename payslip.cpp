#include<iostream>
using namespace std;
class employee
{
	char emp_id[15];
	char emp_name[20];
	float basic_salary;
	float DA;
	int HRA=800;
	float I_tax;
	public:
	accept()
	{
		cout<<"\n Enter Employee id: \t";
		cin>>emp_id;
		cout<<"\n Enter Employee name: \t";
		cin>>emp_name;
		cout<<"\n Enter Employee salary: \t";
		cin>>basic_salary;
		DA = 0.25*basic_salary;
		I_tax = 0.15*basic_salary;
	}
	display()
	{
		cout<<"\n  \t \t \t \t *****Employee Payslip for "<<emp_id<<"*****";
		cout<<"\n  Employee name: \t"<<emp_name;
		cout<<"\n  Employee salary: \t"<<basic_salary;
		cout<<"\n  DA: \t \t \t"<<DA;
		cout<<"\n  Income TAX: \t \t"<<I_tax;
		
	}	
};
int main()
{
	employee e;
	e.accept();
	e.display();
}
