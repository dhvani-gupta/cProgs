#include <iostream>
#include <fstream>
using namespace std;

/*int main()
{
    ofstream myfile("file.text");
    myfile << "Writing to file using fstream constructor!" << endl;
    myfile.close ();
    return 0;
} */
int main()
{
    ofstream myfile;
    myfile.open("file.text");
    myfile << "Writing to file using fstream open()!" << endl;
    myfile.close ();
    return 0;
}
