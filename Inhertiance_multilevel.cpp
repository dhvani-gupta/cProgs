//static inputs
#include<iostream>
using namespace std;
class Student
{
public: int roll;
        input_roll()
        {
        cout<<endl<<"Enter Roll number= \t";
		cin>>roll;
        }
        output_roll()
        {
        cout<<endl<<"Roll number= \t"<<roll;;
        }
};
class test
{
public:
        float m1,m2;
        input_marks()
        {
        cout<<"\n Enter marks for sub1: \t";
        cin>>m1;
        cout<<"\n Enter marks for sub2: \t";
        cin>>m2;
        
        }
        output_marks()
        {
        cout<<endl<<"Marks of SUbject 1= \t"<<m1;
        cout<<endl<<"Marks of SUbject 2= \t"<<m2;
        }
        marks1()
        {
        	return m1;
		}
		marks2()
        {
        	return m2;
		}
};
class score : public Student , public test
{
	public:
		char grade;
		grades()
		{
			if(m1>=90 && m2>=90)
		{
			grade = 'A';
			cout<<"\n Grade: \t"<<grade;
		}
	}
		
};
int main()
{
	score student1;
	student1.input_roll();
	student1.input_marks();
	student1.output_marks();
	student1.grades();
}
