#include<iostream>
using namespace std;
class Parent
{
public:
        int id_parent;
    input()
    {
    cout<<"enter the parent id: \t";
    cin>>id_parent;
        }
        output()
        {
        cout<<"\n id = \t"<<id_parent;
        }
};
class Derive : public Parent
{
public: char name[20];
    input_name()
    {
    cout<<"\n enter name: \t";
    cin>>name;
    }
};
main()
{
Derive obj;
obj.input();
obj.output();
obj.input_name();
}
