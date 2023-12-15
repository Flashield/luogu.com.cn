#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
    double n;
    cin >> n;
    if (n > 0) cout <<fixed<<setprecision(2)<< n;
    else cout << fixed <<setprecision(2)<< -n;
    return 0;
}
