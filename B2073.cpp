// https://www.luogu.com.cn/problem/B2073

#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
    int a, b, n, c;
    cin >> a >> b >> n;
    for (int i = 0; i < n; i++)
    {
        c = (a * 10 / b) % 10;
        a = a*10%b;
        // a %= b;
        // a *=10;
    }
    // a/=b;
    // cout << a << endl;
    cout << c << endl;
    
    return 0;
}
