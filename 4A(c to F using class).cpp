#include<iostream>
#include<conio.h>
 using namespace std;
 class temperature
 {
 	public:
	 float temp ;
	 float  temp1;
 	 int enterdate()
 		{
 			std:cout<<"Enter temperature in °C: \t";
			cin>>temp;	
	 	}
	 calc();
 };
  	int temperature :: calc(){
	  
	 	temp1 = (temp * 9/5 ) + 32;
		cout<<"In °F, Temperature = "<<temp1;
	 }
 main()
{
	temperature t;
	t.enterdate();
	t.calc();
}
