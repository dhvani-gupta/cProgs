//insertion sort using pointers
#include<iostream>
using namespace std;
int main()
{
  int n, array[100], c, d, t, flag = 0;
  int *p;
  p=array;

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

  return 0;
}
