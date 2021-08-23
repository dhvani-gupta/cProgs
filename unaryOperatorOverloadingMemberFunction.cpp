#include<iostream>
using namespace std;
class complex {
    int a, b;
public:

    complex() {
    }

    void getvalue() {
        cout << "Enter the Two Numbers: \t";
        cin >> a>>b;
    }

    void operator-() {
        this->a = -a;
        this->b = -b;
    }

    void display() {
        cout << a << "\t" << b << endl;
    }
};

int main() {
    complex obj;
    obj.getvalue();
    -obj;
    cout << "Final values : \n";
    obj.display();
    
}
