#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
    char a;
    int b;
    float c;
    double d;
    cin >> a >> b >> c >> d;
    cout<<a<<" "<<b<<" "<<fixed<<setprecision(6)<<c<<" "<<d<<fixed<<setprecision(6)<<endl;

    return 0;
}
