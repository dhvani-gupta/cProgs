#include<iostream>
using namespace std;
class item
{
    int number;
    float cost;
public:
        input()
        {
        cout<<"Enter values of number and cost:\t";
        cin>>number>>cost;
        }
        output()
        {
        cout<<"\n Values are:"<<endl;
        cout<<"Number="<<number<<endl<<"Cost="<<cost;
        }
  void  friend get_access  (item);

};
void get_access(item i)		//friend function
{
	cout<<"\n \n \n \n \n  Inside friend function";
	cout<<endl<<"Number="<<i.number;
	cout<<endl<<"Cost="<<i.cost;
}
main()
{
	item i1;
	i1.input();
	cout<<endl;
	i1.output();
	get_access(i1);
}
