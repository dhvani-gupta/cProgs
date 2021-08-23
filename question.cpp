#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int i,d,n,reverse,reverse1,rem,num,division=0,m[1000];
	//cout<<"\n Enter the one digit number to multiply to (d): \t";
	cin>>d;
	//cout<<"\n Enter the number of digits (n): \t";
	cin>>n;
	//cout<<"\n Enter the number-least significant digit first (m): \n";
	for(i=0;i<n;i++)
	{
		cin>>m[n-i];
	}
	while (m[n-i] != 0)
    {
        reverse = reverse * 10;
        
        reverse = reverse + m[n-i]%10;
        
        m[n-i] = m[n-i]/10;
    }
    int number = 0;
	for (int i = 0; i <=n; i++) {
    number *= 10;
    number += m[i];
}
//cout<<"number:"<<number;
num= d*number;
//cout <<"\n Multiplication:";
//cout<< num<<endl;
	
    //cout<<"\n Num:"<<num<<endl;;
    int counter=0;
    while(counter<=n) 
	{
		division=num/10;
		cout<<endl<<num%10<<" ";
		num=division;
		counter++;
	}
    
}
