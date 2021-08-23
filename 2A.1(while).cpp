#include <iostream>
using namespace std;
int main()
{
	char *p;
	char A[100];
	int vowel, i=0;
	cout<<"Enter the Character Array: \n";
	cin>>A;
	p=A;
	while(*p != '\0')
	{
		if(*p=='a' || *p=='A' || *p=='e' || *p=='E' || *p=='i' || *p=='I' || *p=='o' || *p=='O' || *p=='u' || *p=='U')
		
			vowel++;
			i++;
			p++;
			
		
		
	}
	cout<<endl<<"Length of the string="<<i<<endl;
	cout<<"No. of Vowels inside the string="<<vowel<<endl;
	cout<<"No. of consonants inside the string="<<(i-vowel);
}
