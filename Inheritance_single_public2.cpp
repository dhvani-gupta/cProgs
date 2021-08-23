#include <bits/stdc++.h>
using namespace std;

//Base class
class Parent
{
    public:
      int id_p;
      char name[20];
      input_name()
      {
          cout<<"enter name";
          cin>>name;
      }
      output_name()
      {
          cout<<name;
      }
};
class Child : public Parent
{
    public:
      int id_c;
};

//main function
int main()
   {

        Child obj1;

        // An object of class child has all data members
        // and member functions of class parent
        obj1.id_c = 7;
        obj1.id_p = 91;
        //obj1.input_name();
        //obj1.output_name();
        cout << "Child id is " <<  obj1.id_c << endl;
        cout << "Parent id is " <<  obj1.id_p << endl;

        return 0;
   }
