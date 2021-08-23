#include<iostream>
#include<fstream>
#include<string.h>
#include<iomanip>
#define size 5
using namespace std; 
class phone
{
        public:
        void set_data();
 
};
 
 
 
void phone:: set_data()
{
 
         ofstream  santo("phone.txt");
         char  *name[size]={"sattar","santo","kamruzzaman","robin","kawser"};
        char  *number[size]
   ={"01673050495","01723783117","01818953250","+214324513","+455652132"};
     for(int i=0;i<size;i++)
       {
             santo.setf(ios::left,ios::adjustfield);
             santo.width(20);
             santo<<name[i];
             santo.setf(ios::right,ios::adjustfield);
             santo.width(15);
             santo<<number[i]<<"\n";
      }
}
 
int main()
{
        phone book;
        book.set_data();
        char name[100],n[100],number[100];
 
              ifstream  santo("PHONE.txt");
             cout<<" Enter your desired name to find mobile number :" ;
              cin>>n;
 
        again:
          santo>>name;
          if(!strcmp(name,n))
           {
                   santo.getline(number,100);
                   cout<<setw(-20)<<name<<setw(25)<<number<<"\n";
 
           }
         else
          {
                if(santo.eof()!=0)
                cout<<" Sorry your input name is not found in list \n";
                 else
                 goto again;
          } 

      return 0;
}
