#include <cstring> 
#include <iostream> 
#include <string.h> 
  
using namespace std; 
  
// Class to implement operator overloading 
// function for concatenating the strings 
class CompareString { 
  
public: 
    // Classes object of string 
    char str[25]; 
  
    // Parametrized Constructor 
    CompareString(char str1[]) 
    { 
        // Initialize the string to class object 
        strcpy(this->str, str1); 
    } 
  
    // Overloading '==' under a function 
    // which returns integer 1/true 
    // if left operand string 
    // and right operand string are equal. 
    //(else return 0/false) 
    int operator==(CompareString s2) 
    { 
        if (strcmp(str, s2.str) == 0) 
            return 1; 
        else
            return 0; 
    } 
  
    // Overloading '<=' under a function 
    // which returns integer 1/true 
    // if left operand string is smaller than 
    // or equal to the right operand string. 
    // (else return 0/false) 
    int operator<=(CompareString s3) 
    { 
        if (strlen(str) <= strlen(s3.str)) 
            return 1; 
        else
            return 0; 
    } 
  
    // Overloading '>=' under a function 
    // which returns integer 1/true 
    // if left operand string is larger than 
    // or equal to the right operand string. 
    //(else return 0/false) 
    int operator>=(CompareString s3) 
    { 
        if (strlen(str) >= strlen(s3.str)) 
            return 1; 
        else
            return 0; 
    } 
}; 
  
void compare(CompareString s1, CompareString s2) 
{ 
  
    if (s1 == s2) 
        cout << s1.str << " is equal to "
             << s2.str << endl; 
    else { 
        cout << s1.str << " is not equal to "
             << s2.str << endl;  
    } 
} 
  
// Testcase1 
void testcase1() 
{ 
    // Declaring two strings 
    char str1[10];  
    char str2[10] ;
	cout<<"\n Enter Date1: (DD/MM/YYYY) \t"; 
	cin>>str1;
	cout<<"\n Enter Date2: (DD/MM/YYYY)\t";
	cin>>str2;
  
    // Declaring and initializing the class 
    // with above two strings 
    CompareString s1(str1); 
    CompareString s2(str2); 
  
    cout << "Comparing \"" << s1.str << "\" and \""
         << s2.str << "\"" << endl; 
  
    compare(s1, s2); 
}  
// Driver code 
int main() 
{ 
    testcase1();  
    return 0; 
}
