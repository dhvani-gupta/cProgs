#include<iostream>
using namespace std;
main(){
char word[20];
int count_of_vowel=0;
int consonant=0;
char *character;


cout<<"Enter the string \n";
cin>>word;

character=word;
while(*character != '\0'){


    switch(*character){
    case 'A':
        count_of_vowel++;
        break;
    case 'E':
        count_of_vowel++;
        break;
    case 'I':
        count_of_vowel++;
        break;
    case 'O':
        count_of_vowel++;
        break;
    case 'U':
        count_of_vowel++;
        break;
    case 'a':
        count_of_vowel++;
        break;
    case 'e':
        count_of_vowel++;
        break;
    case 'i':
        count_of_vowel++;
        break;
    case 'o':
        count_of_vowel++;
        break;
    case 'u':
        count_of_vowel++;
        break;
    default:
        consonant++;		

    }
    character++;

}

cout<<"\n Vowels are"<<count_of_vowel;
cout<<"\n Constants are"<<consonant;
return 0;
}
