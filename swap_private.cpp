#include<iostream>
using namespace std;
class Derived;
class Base
{
    protected:
        int num1;
    public:
        Base()
        {
                cout<<"Enter first no: \t";
                cin>>num1;
        }
        void show()
        {
        		cout<<"\n After swapping";
                cout<<"\n Value of Number 1 : "<<num1;
        }
        friend void swap(Base *num1, Derived *num2);
};
class Derived
{
    protected:
        int num2;
    public:
        Derived()
        {
                cout<<"Enter second no: \t";
                cin>>num2;
        }
        void show()
        {
                cout<<"\n Value of Number 2 : "<<num2;
        }
        friend void swap(Base *num1, Derived *num2);
};
void swap(Base *no1, Derived *no2)
{
        int no3;
        no3=no1->num1;
        no1->num1=no2->num2;
        no2->num2=no3;
}
int main()
{
        Base b;
        Derived d;
        swap(&b, &d);
        b.show();
        d.show();
        return 0;
}
