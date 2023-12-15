// https://www.luogu.com.cn/problem/B2067

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int m, n, number, cnt = 0;
    cin >> m;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> number;
        if (m >= number)
        {
            cnt+=1;
            m -= number;
        }
    }
    cout << n-cnt << endl;
    return 0;
}