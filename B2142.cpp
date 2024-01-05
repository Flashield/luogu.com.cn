// https://www.luogu.com.cn/problem/B2142
#include <iostream>
using namespace std;

long acc_sum(long n)
{
    if (n==0)
    {
        return 0;
    }
    return n + acc_sum(n-1);
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    cout<<acc_sum(n)<<endl;
    return 0;
}
