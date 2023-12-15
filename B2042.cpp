#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    long n;
    cin >> n;
    cout << (!(n%3 || n%5) ? "YES" : "NO") << endl;
    return 0;
}
