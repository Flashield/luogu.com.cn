// https://www.luogu.com.cn/problem/B2078
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    long long m, k, n=0;
    cin >> m >> k;
    do
    {
        k = k - ((m%10==3)?1:0);
        m /= 10;
    }while (m);
    cout << (k?"NO":"YES")<< endl;
    return 0;
}
