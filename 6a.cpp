#include<iostream>
using namespace std;
class game
{
	public:
	int numberOfgoals;
	game()
	{ 
		numberOfgoals=0;
	}
	int increment()
	{
		++numberOfgoals;
	}
	int display()
	{
		cout<<numberOfgoals;
	}
	
};
int main()
{
	int n;
	cout<<"\n How many goals? \t";
	cin>>n;
	game football;
	football.display();
	football.increment();
	for(int i=1;i<n;i++)
	{
		cout<<endl;
		football.increment();
	}
	football.display();
	cout<<endl;
}
