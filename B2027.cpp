#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
    double r, pi=3.14;
    cin >> r;
    cout <<fixed<<setprecision(5)<< 4.0/3*pi*r*r*r<<endl;
    return 0;
}
