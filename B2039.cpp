#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    long long a , b;
    cin >> a >> b;
    cout << (a>b ? ">":(a<b ? "<":"="))<<endl;
    return 0;
}
