// https://www.luogu.com.cn/problem/B2070
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    double sum=0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        sum += pow((-1),i)*(1.0/(i+1));
    }
    cout << fixed << setprecision(4) << sum << endl;
    return 0;
}
