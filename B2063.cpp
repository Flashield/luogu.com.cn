#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    double x;
    cin >> x >> n;
    cout << fixed << setprecision(4) << x*pow(1.001, n) << endl;
    return 0;
}
