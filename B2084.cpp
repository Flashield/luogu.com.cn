// https://www.luogu.com.cn/problem/B2084
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    long long n;
    cin >> n;
    for (long i = n-1; i > 0; i--)
    {
        if (!(n%i))
        {
            cout << i << endl;
            break;
        }
    }
    
    return 0;
}
