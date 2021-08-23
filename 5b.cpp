#include<iostream>
using namespace std;
class DM;
class DB
{
	float feet;
	float inches;
	float o1;
	public:
	input()
	{
		cout<<"enter value of object 1 in metres: \t";
		cin>>o1;
	}
	output()
	{
		cout<<"\n Object 1= \t"<<o1<<"m";
	}
	 friend float addM(DM,DB);
	 friend float addCm(DM,DB);
	 friend float addF(DM,DB);
	 friend float addI(DM,DB);
};
class DM
{
	float metres;
	float centimetres;
	float o2;
	public:
	input()
	{
		cout<<endl<<"enter value of object 2 in metres: \t";
		cin>>o2;
	}
	output()
	{
		cout<<"\n Object 2= \t"<<o2<<"m";
	}
	 friend float addM(DM,DB);
	 friend float addCm(DM,DB);
	 friend float addF(DM,DB);
	 friend float addI(DM,DB);
};
float addM(DM a,DB b)
{
	cout<<"\n Addition in metres: \t"<<(a.o2 + b.o1);
}
float addCm(DM c,DB d)
{
	cout<<"\n Addition in centimeteres: \t"<<((c.o2)*100) + ((d.o1)*100);
}
float addF(DM e,DB f)
{
	cout<<"\n Addition in centimeteres: \t"<<(((e.o2)*3.280) + ((f.o1)*3.280));
}
float addI(DM g,DB h)
{
	cout<<"\n Addition in centimeteres: \t"<<(((g.o2)*39.37) + ((h.o1)*39.37));
}
int main()
{
	char ch,ch1;
	DB object2;
	DM object1;
	object2.input();
	cout<<endl;
	object2.output();
	cout<<endl;
	object1.input();
	cout<<endl;
	object1.output();
	label1:cout<<"\n Which format do u want to print the addition in? (m/c/f/i): \t";
	cin>>ch;
	switch(ch)
	{
		case 'm': addM(object1,object2);
				  break;
		case 'c': addCm(object1,object2);
				  break;
		case 'f': addF(object1,object2);
				  break;
		case 'i': addI(object1,object2);
				  break;
				  
	}
	cout<<"\n Choose again? (y/n): \t";
	cin>>ch1;
	if(ch1 == 'y' || ch1 =='Y')
	{
		goto label1;
	}
	else 
	{
		cout<<"\n Program terminated!";
	}
	}
	
		

