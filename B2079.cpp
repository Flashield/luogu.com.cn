// https://www.luogu.com.cn/problem/B2079
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
    double n, e=1, p=1;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        p *= i;
        e += 1/p;
    }
    cout << fixed << setprecision(10) << e << endl;
    
    return 0;
}
