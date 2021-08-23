#include<iostream>
using namespace std;

class prn_obj // class declaration
{
//private data members
	int rno;
	char *name;
	public:
	set_data(char *n, int r) //set data member values
	{
		name=n; rno=r;
	}
 	print() // prints data member using 'this' pointer
	{
		cout<<this->name<<" has invoked print() function"<<endl; cout<<"The roll number is "<<this->rno<<endl;
	}
};
int main()
{
	prn_obj ob1,ob2,ob3; // object declaration
	ob1.set_data("Suba",1);
	ob2.set_data("kayal",2);
	ob3.set_data("Jeysree",3);
	// calling print function using objects ob1.print();
	ob2.print();
	ob3.print();
}
