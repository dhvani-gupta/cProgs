//binary search
#include <iostream>
using namespace std;
int main()
{
	int count, i,j, a[30], n, first, last, middle;
	char ch;
	cout<<"how many elements would you like to enter?:"; 
        cin>>count;

	for (i=0; i<count; i++)
	{
		cout<<"Enter number "<<(i+1)<<": "; 
                cin>>a[i];
	}
	//sorting
	for(i=0;i<count-1;i++)
    {
        for(j=0;j<count-i-1;j++)
        {
            
            if(a[j]>a[j+1])
            {
            
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    cout<<"After sorting  the array is:\t";
    for(i=0;i<count;i++)
    cout<<a[i]<<" ";
    //element to search
	label: cout<<"\n Enter the number that you want to search:"; 
        cin>>n;
	first = 0;
	last = count-1;
	middle = (first+last)/2;
	while (first <= last)
	{
	   if(a[middle] < n)
	   {
		first = middle + 1;

	   }
	   else if(a[middle] == n)
	   {
		cout<<n<<" found in the array at index "<<middle+1<<"\n"; 
                break; 
           } 
           else { 
                last = middle - 1; 
           } 
           middle = (first + last)/2; 
        } 
        if(first > last)
	{
	   cout<<n<<" not found in the array";
	   cout<<"\n Choose again? (y/n): \t";
	   cin>>ch;
	   if(ch=='y')
	   {
	   	goto label;
	   }
	}
	return 0;
}
