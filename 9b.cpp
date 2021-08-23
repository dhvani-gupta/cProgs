#include<iostream>
using namespace std;

class company
{
int sal; int nop;
public:
friend void print(company &);
company()
{
sal=0; nop=0;
}
company operator+(company);
company operator-(company c)
{
company temp;
temp.sal=sal-c.sal;
temp.nop=nop-c.nop;
return temp;
}
void set_data(int s, int n)
{
sal=s; nop=n;
}
};
void print(company &sum)
{
cout<<"Total Salary is :\t "<<sum.sal<<endl;
cout<<"Total No: of Parts is: \t"<<sum.nop<<endl;
}
company company:: operator+(company c)
{
company temp;
temp.sal=sal+c.sal;
temp.nop=nop+c.nop;
return temp;
}
main()
{
int s,n;
company sum,ram,Sham,sub;
cout<<"Enter the salary for Ram: \t"; cin>>s;
cout<<"Enter No:Of Parts for Ram: \t"; cin>>n;
ram.set_data(s,n);
cout<<"Enter the salary for Sham: \t"; cin>>s;
cout<<"Enter No:Of Parts for Sham: \t"; cin>>n;
Sham.set_data(s,n);
sum=ram+Sham;
print(sum);
sub=sum-ram;
print(sub);
}


