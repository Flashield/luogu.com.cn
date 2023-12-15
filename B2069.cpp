// https://www.luogu.com.cn/problem/B2069
#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
    double n, p=1, q=2, sw, sum;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        sum += q/p;
        sw = p;
        p = q;
        q = sw+q;
    }
    cout << fixed << setprecision(4) << sum << endl;
    return 0;
}
