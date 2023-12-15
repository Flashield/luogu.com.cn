#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
    double r, pi=3.14159;
    cin >> r;
    cout << fixed <<setprecision(4) << 2*r <<" " << fixed<< setprecision(4)<<2*pi*r<<" "<<fixed<<setprecision(4)<<pi*r*r<<endl;
    return 0;
}
