#include <fstream>
#include <iostream>
#include <list>
using namespace std;

int main()
{
    ifstream in("in.txt");
    ofstream out("out.txt");
    list <int> l;
    int n;
    in >> n;
    for (int i = 0; i < n; i++) {
        int a;
        in >> a;
        l.push_front(a);
    }
    for (int i : l)
        out << i << " ";
}
