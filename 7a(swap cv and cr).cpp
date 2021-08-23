#include<iostream>
using namespace std;
int swap_CV(int , int);
int swap_CR(int * ,int *);
int main()
{
	char choice;
	int no1,no2;
	cout<<"\n Enter Number 1: \t";
	cin>>no1;
	cout<<"\n Enter Number 2: \t";
	cin>>no2;
	cout<<"\n How do You want to swap? (call by value (1) /call by reference (2)) : \t";
	cin>>choice;
	switch(choice)
	{
		case '1': swap_CV(no1,no2);
				  break;
		case '2': swap_CR(&no1 , &no2);
				  break;
		default : cout<<"\n Invalid choice!";
				  break;
	}
	
}
int swap_CR(int *a , int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
	cout<<"\n Swapped Numbers are: \n Number 1:\t "<<*a<<"\n Number 2 : \t"<<*b;
}
int swap_CV(int a , int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
	cout<<"\n Swapped Numbers are: \n Number 1:\t "<<a<<"\n Number 2 : \t"<<b;
}
