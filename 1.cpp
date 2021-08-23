#include<iostream>
#include<stdio.h>
using namespace std;
class shape
{
	private:
		int length;
		public:
			
			shape(int a)
			{
				length = a;
				cout<<"\n hi";
			}
			shape()
			{
				int x=0;
				printf("\n Shape created");
				
			}
};
int main()
{
	shape s;//calls default constructor
	shape t=18;//calls parameterized constructor
	return 0;
	
}
