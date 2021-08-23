//Copy constructor 

#include<iostream>

using namespace std;

class item

{

    int number;



public:

        item (int a)     // parametric constructor

        {



            number=a;

        }



        item( item &object)

        {

            number=object.number;

        }

        display()

        {

         return number;

        }

};



main()

{

item i1(10);  //item i1=10;

item i2=i1; // i2(i1);

i1.display();
//i1.output();
cout<<endl;

}
