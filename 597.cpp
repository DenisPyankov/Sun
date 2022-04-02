#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    ifstream in("in.txt");
    ofstream out("out.txt");
    int a, b, c;
    in >> a >> b >> c;
    if (a * a >= b * b + c * c)
        out << "YES";
    else
        out << "NO";
}
