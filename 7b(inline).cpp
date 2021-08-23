#include<iostream>
using namespace std;
 inline float add(int a,int b){
	return a+b;
}
 inline float subtract(int a,int b){
	return a-b;
}
 inline float multiply(int a,int b)
{
	return a*b;
}
 inline float divide(int a,int b){
	if(b==0)
	{
		std::cout<<"\n Invalid";
	}
	else return a/b;
}
int main()
{
	float a,b;
	cout<<" Enter First number: \t ";
	cin>>a;
	cout<<"\n Enter Second number:  \t";
	cin>>b;
	cout<<"\n Addition \t \t"<< add(a,b)<<endl;
	cout<<"\n Subtraction \t \t"<< subtract(a,b)<<endl;
	cout<<"\n Multiplication \t"<< multiply(a,b)<<endl;
	cout<<"\n Division \t \t"<< divide(a,b)<<endl;	
}
