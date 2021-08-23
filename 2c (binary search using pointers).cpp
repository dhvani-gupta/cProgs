//insertion sort using pointers
#include<iostream>
using namespace std;
int main()
{
  int n, array[100], c, d, t, count, i,j, first, last, middle,flag = 0;
  int *p;
  p=array;
  char ch;

  std::cout<<"Enter number of elements: \n";
  std::cin>>n;
  cout<<"\n Enter elements: \n";
  for (c = 0; c < n; c++)
	{
		std::cin>> p[c];
	}
    
    cout<<endl<<"Array Elements: \n";

	for(c=0;c<n;c++)
	{
		cout<<*(array+c)<<"\t";
	}

  for (c = 1 ; c <= n - 1; c++) 
  {
    t = p[c];

    for (d = c - 1 ; d >= 0; d--) 
	{
      if (p[d] > t) 
	  {
        p[d+1] = p[d];
        flag = 1;
      }
      else
        break;
    }
    if (flag)
      p[d+1] = t;
  }

  cout<<"\n Sorted list in ascending order:\n";

  for (c = 0; c <= n - 1; c++) 
  {
    cout<<p[c]<<"\t";
  }
  label: cout<<"\n Enter the number that you want to search:"; 
        cin>>count;
	first = 0;
	last = n-1;
	middle = (first+last)/2;
	while (first <= last)
	{
	   if(array[middle] < count)
	   {
		first = middle + 1;

	   }
	   else if(array[middle] == count)
	   {
		cout<<count<<" found in the array at index "<<middle+1<<"\n"; 
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
