#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    ifstream in("in.txt");
    ofstream out("out.txt");
    int a, b, c;
    in >> a >> b >> c;
    if (a + b == c)
        out << "YES";
    else if (a + c == b)
        out << "YES";
    else if (b + c == a)
        out << "YES";
    else
        out << "NO";

}
