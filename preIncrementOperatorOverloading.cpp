#include<iostream>
using namespace std;
class complex
{
int x,y;
public:
    input()
    {
    cout<<"enter the value of x and y: \t";
    cin>>x>>y;
    }
output()
{
    cout<<endl;
    cout<<"x="<<x<<endl<<"y="<<y;
}
complex operator ++()
{
	complex temp;
	temp.x= ++x;
	temp.y= ++y;
	return temp;
}
};
int main()
{
	complex c1,c2;
	c1.input();
	c1.output();
	c2=++c1;  //c2=c1++;
	cout<<endl;
	c2.output();
}
