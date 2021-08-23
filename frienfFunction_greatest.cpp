#include<iostream>
using namespace std;
class one;

//declare
class two
{
int x;
public:
input()
{
cout<<"enter value of x";
cin>>x;
}
output()
{
cout<<endl<<"first number is="<<x;
}
void friend greatest(two, one );
};
class one
{
int y;
public:
input()
{
cout<<"enter value of second";
cin>>y;
}
output()
{
cout<<endl<<"second no. is="<<y;
}
void friend greatest(two, one);
};

void greatest (two t, one o)
{
if(t.x>o.y)
{

cout<<endl<<"greatest="<<t.x;
}
else
cout<<endl<<"greatest is="<<o.y;

}


main()
{
one o1;
two t1;
o1.input();
cout<<endl;
o1.output();
cout<<endl;
t1.input();
cout<<endl;
t1.output();
greatest(t1,o1);

}
