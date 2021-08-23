#include<iostream>
using namespace std;
class box
{
	public:	float length;
	float breadth;
	float height;
	float Volume;
	float inputvalue()
	{
		cout<<"\n Input Length : \t";
		cin>>length;
		cout<<"\n Input Breadth : \t";
		cin>>breadth;
		cout<<"\n Input Height : \t";
		cin>>height;
	}
	float display() 
	{
		cout<<"\n Length = \t "<<length;
		cout<<"\n Breadth= \t "<<breadth;
		cout<<"\n Height = \t "<<height;
	}
	float volume()
	{
		Volume=length *breadth *height ;
		cout<<"\n \t \t \t \t Volume = "<<Volume;
	}
	
};
int main()
{
	box first;
	first.inputvalue();
	first.display();
	first.volume();	
}
