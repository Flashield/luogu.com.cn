#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int m, n, sum=0;
    cin >> m >> n;
    for (int i=m; i<=n; i++)
    {
        i%2 ? sum+=i: 0;
    }
    cout << sum << endl;

    return 0;
}
