//voting
#include<iostream> 									
 using namespace std;
 main()
 {
	int vote ,m ;
	int c[5]={0};
	cout<<" \t \t \t \t \t Voting List";
	cout<<"\n Enter Number of voters: ";
	cin>>m;
	while(m>0)
	{
	cout<<"\n Vote for any candidate 1-5 : \t";
	cin>> vote;
	switch(vote)
	{
		case 1: cout<< " Thank you for voting!";
				  c[0]++;
				  break;
		case 2: cout<< " Thank you for voting!";
				  c[1]++;
				  break;
		case 3: cout<< " Thank you for voting!";
				  c[2]++;
				  break;
		case 4: cout<< " Thank you for voting!";
				  c[3]++;
				  break;
		case 5: cout<< " Thank you for voting!";
				  c[4]++;
				  break;
		default: cout<<"\n SPOILT BALLOT!";
				  c[5]++;
				  break;
					
	}
	m--;
}
	cout<<"\n No. Of votes of for 1: \t"<<c[0];
	cout<<"\n No. Of votes of for 2: \t"<<c[1];
	cout<<"\n No. Of votes of for 3: \t"<<c[2];
	cout<<"\n No. Of votes of for 4: \t"<<c[3];
	cout<<"\n No. Of votes of for 5: \t"<<c[4];
	cout<<"\n Spoilt ballots:  \t \t"<<c[5];
	
 }
