// https://www.luogu.com.cn/problem/B2068
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, number, cnt=0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> number;
        if (number%10>((number/10)%10+(number/100)%10+(number/1000)%10))
        {
            cnt += 1;
        }
    }
    cout << cnt << endl;
    
    return 0;
}
