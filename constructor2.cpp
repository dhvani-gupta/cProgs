#include<iostream>

using namespace std;

class item

{

int a,b; //mmber data



public: item(int x, int y)   // parameterised construcrtor

{ a=x;b=y; }

int output()

{

cout<<"a="<<a<<endl<<"b="<<b;}

item()    //default constructor

{



}

item(int j)    //default constructor

{

a=j;

}



};

main()

{



item i1(20,30);

item i2;

item i3(10);

i1.output();

cout<<endl;

i2.output();

cout<<endl;

i3.output();

}
