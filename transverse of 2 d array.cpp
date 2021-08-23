//program to find trasnverse elements in a 2-d array
#include<iostream> 										//header files
#include<conio.h>
 using namespace std;
 main()
 {
 	int a[10][10];						            	// 2-d array declaration
 	int i,j,m,n;							        	
 	cout<<" Enter number of rows for a square matrix : \t";			 
 	cin>>m;
 	cout<<"\n Enter number of columns for a square matrix : \t";	
 	cin>>n;
 	cout<<"\n enter array elements: \n";				//get array elements from user
 	for(i =0; i<m; i++)
 	{
 		for(j=0 ; j<n ; j++)
 		{
 			cin>>a[i][j];
		 }
	}
 	cout<<"\n array elements are: \n";					//display array elements
 	for(i =0; i<m; i++)
 	{
 		for(j=0 ; j<n ; j++)
 		{
 			cout<<a[i][j]<<"\t" ;
 			if (j == m - 1)
            cout << endl << endl;
		 }
	 }
	cout<<"\n Transverse Elements are: \n";			
 	for(i =0; i<m; i++)
 	{
 		for(j=0 ; j<n ; j++)
 		{
 			if(i==j)
 			{
 				cout<<a[i][j]<<"\t";				//display transerve elements
			}
		 }
	 }
	 
 	
 }
