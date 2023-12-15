#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    double h , r;
    double pi = 3.14;
    cin >> h >> r;
    cout << ceil(20*1000/(pi*r*r*h))<<endl;
    return 0;
}
