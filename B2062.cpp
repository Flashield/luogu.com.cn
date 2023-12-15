#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    long a, n, p=1;
    cin >> a >> n;
    for (int i=0; i<n; i++)
    {
        p *= a;
    }
    cout << p << endl;
    return 0;
}
