# include <iostream>
# include <iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
    int a, b;
    cin >> a >> b;
    cout<<fixed<<setprecision(9)<<double(a)/b<<endl;
    return 0;
}
