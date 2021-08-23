#include<iostream>
using namespace std;

struct states
{
	char state[30];
	int no_of_engineering_colleges;
	int no_of_medical_colleges;
	int no_of_management_colleges;
	int total;
	void input()
	{
		cout<<"\n Enter the Name of State: \t \t";
		cin>>state;
		cout<<"\n Enter the number of engineering colleges: \t";
		cin>>no_of_engineering_colleges;
		cout<<"\n Enter the number of medical colleges: \t \t";
		cin>>no_of_medical_colleges;
		cout<<"\n Enter the number of management colleges\t";
		cin>>no_of_management_colleges;
		
	}
	void output()
	{
		cout<<"\n State: \t \t \t \t "<<state;
		cout<<"\n Number of engineering colleges: \t "<<no_of_engineering_colleges;
		cout<<"\n Number of medical colleges: \t \t "<<no_of_medical_colleges;
		cout<<"\n Number of management colleges: \t "<<no_of_management_colleges;
		total=no_of_management_colleges+no_of_medical_colleges+no_of_engineering_colleges;
		cout<<"\n \n \n Total number of colleges =\t"<<total;
	}
};
int main()
{
	states statename[100];
	int i,n,max=0;
	cout<<"\n Enter the number of states:\t";
	cin>>n;
	for(i=0;i<n;i++)
	{
		statename[i].input();
		statename[i].output();
		cout<<endl<<endl;
	}	
	for(i=0;i<n;i++)
	{
		if(statename[i].total >= statename[i+1].total)
		{
			max = statename[i].total;
		}
	}
	cout<<"\n Max colleges :"<<max;
	
}
