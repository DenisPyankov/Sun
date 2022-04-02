#include <fstream>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ifstream in("in.txt");
    ofstream out("out.txt");
    int a1, a2, a3, b1, b2, b3;
    vector <int> a, b;
    for (int i = 0; i < 6; i++) {
        int n;
        in >> n;
        if (i < 3)
            a.push_back(n);
        else
            b.push_back(n);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    out << a[0] * b[0] + a[1] * b[1] + a[2] * b[2];
}
