#include<iostream>
using namespace std;
int count=0;
class contdest              //class for constructor and destructor
{
public: contdest()              // constructor created
{
cout<<"\nObject Created ="<<count++;
}
~contdest()                     //destructor  created
{
cout<<"\nObject Destroyed = "<<--count;
}
};
main()
{
cout<<"\nMain Block\n";
contdest a,b,c;                 // objects created inside the main block
{
cout<<"\nBlock 1\n";
contdest d;                         // another objec
}
cout<<"\nAgain main Block\n";
contdest e;                         // another object created inside the main block
}
