//bill calculation
#include <iostream>
#include <conio.h>
using namespace std;
int main() {
    int no_unit;
    char name[20];
    char ch;
    float charge, scharge;
    label: cout<<"Enter the name of User : \t";
    cin>>name;
    cout<<endl;
    cout<<"Enter the number of units consumed : \t";
    cin>>no_unit;
    if (no_unit <=100) {
        charge = (no_unit*0.60);
    }
    else if (no_unit > 100 && no_unit <=300 ) {
        charge = (100*0.60);
        charge = charge  + ( ( no_unit - 100)* 0.80 );
    }
    else if (no_unit > 300 ) {
        charge = (100*0.60);
        charge = charge  + ( ( no_unit - 100)* 0.80 );
        charge = charge + ( (no_unit-300)* 0.90 );
    }
    if (charge<50)  {
        charge = 50;
    }
    if (charge>300)  {
        scharge = (0.15*charge);
        charge = charge + scharge;
    }
    cout<<"\n"<<"Electricity Bill"<<endl;
    cout<<"Name of the user:  "<<name<<endl;
    cout<<"Bill of the user is:  Rs"<<charge;
    cout<<" \n Enter again? (y/n):\t  ";
    cin>>ch;
    if(ch=='y')
    {
    	goto label;
	}
    return 0;
}
