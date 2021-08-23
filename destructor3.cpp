#include <iostream>
using namespace std;
class T {
public:
int y, z;
T()
{
y = 7;
z = 13;
}
~T(){ }
};
int main()
{
T  T1;
cout <<"the sum is: "<< T1.y+T1.z;
return 0;

}
