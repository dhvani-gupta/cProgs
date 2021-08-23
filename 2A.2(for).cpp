#include <iostream>
using namespace std;
int main()
{
	char *p;
	char A[100];
	int vowel=0,i, consonant=0;
	cout<<"Enter the Character Array: \n";
	cin>>A;
	p=A;
	for(i=0;p[i];++i)
	{
		if(p[i]=='a' || p[i]=='A' || p[i]=='e' || p[i]=='E' || p[i]=='i' || p[i]=='I' || p[i]=='o' || p[i]=='O' || p[i]=='u' || p[i]=='U')
				vowel++;
				else
				consonant++;
			
			
	}
	cout<<endl<<"Length of the string="<<i<<endl;
	cout<<"No. of Vowels inside the string="<<vowel<<endl;
	cout<<"No. of consonants inside the string="<<consonant;
}
