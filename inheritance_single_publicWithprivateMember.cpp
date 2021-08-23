#include<iostream>
using namespace std;
class Parent
{
int a;
public: input()
{
    cout<<"Enter value of a : \t";
    cin>>a;
}

show_a()
{
return a;
}
};
class Derive : public Parent
{

int b,c;
public:  get_b()
    {

cout<<endl<<"Enter value of b: \t";
cin>>b;
    }
add_a_b()
{
c=show_a()*b;
//cout<<c;
}
display()
{
cout<<"\n Values are= :\n ";

cout<<"A= "<<show_a()<<"\t B= "<<b<<" \t c= "<<c;
}
};
main()
{

    Derive obj;
    obj.input();
    obj.get_b();
    obj.add_a_b();
    obj.display();

}
