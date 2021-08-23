#include<iostream>

using namespace std;

main()

{

int n,i;

float *p, total=0;



cout<<"ENter the no. of subjects";

cin>>n;

p=new float[n];

cout<<endl<<"enter marks for the subjects accepted";

for(i=0;i<n;i++)

{

cin>>p[i];

}

cout<<endl<<"Marks="<<endl;

for(i=0;i<n;i++)

{

cout<<"Subject"<<(i+1);

cout<<" " <<*(p+i);

total=total+ *(p+i);

}

cout<<endl<<"Total Marks="<<total;

delete[] p;



}
