Explicit definition of constructor 

#include<iostream>

using namespace std;

class integer

{

int m,n;

public:

        integer(int, int);   // constructor declaration

        display()

        {

        cout<<endl<<"Value of m="<<m<<endl<<"Value of n="<<n;

        }

};



integer ::  integer(int a, int b)

            {

            m=a;

            n=b;

            }

main()

{



integer I(12,13);

I.display();

}
