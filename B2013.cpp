#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
    double F;
    cin >> F;
    cout << fixed <<setprecision(5) << 5*(F-32)/9<<endl;
    return 0;
}
