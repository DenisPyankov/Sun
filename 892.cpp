#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    ifstream in("in.txt");
    ofstream out("out.txt");
    int n;
    in >> n;
    if (n == 12 || n == 1 || n == 2)
        out << "Winter";
    else if (n == 3 || n == 4 || n == 5)
        out << "Spring";
    else if (n == 6 || n == 7 || n == 8)
        out << "Summer";
    else if (n == 9 || n == 10 || n == 11)
        out << "Autumn";
    else
        out << "Error";
}
