#include<iostream>
using namespace std;
class numbers{
	int x ,y;
	public:
		int input(int x , int y)
		{
			this->x= x+y;
			this->y= x-y;
		}
		int output()
		{
			cout<<"\n Sum: \t"<<x;
			cout<<"\n Difference \t"<<y;
		}
		
};
int main()
{
	numbers n;
	int x,y;
	n.input(8,8);
	n.output();
	
}
