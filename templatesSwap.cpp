#include<iostream>
using namespace std;

template <class T>

void Swap(T &x, T &y)    //T should be int , and another placeholder should be float
 {

    T temp;

    temp = x;
    x = y;
    y = temp;
}

int main() {

    int x, y;
    float z;

    cout << "Enter two numbers:";
    cin >> x>>y;

    cout << "Before Swap:";

    cout << "\nx value is:" << x;
    cout << "\ny value is:" << y;

    Swap(x, y);

    cout << "\n\n After Function Templates:\n";

    cout << "\n x value is:" << x;
    cout << "\n x value is:" << y;
}
