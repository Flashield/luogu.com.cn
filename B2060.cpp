#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int m, n, num=17, sum=0;
    cin >> m >> n;
    for (int i=m; i<=n; i++)
    {
        i%num ? 0 : sum+=i;
    }
    cout << sum << endl;

    return 0;
}
