// https://www.luogu.com.cn/problem/B2071

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    long long a, b, c;
    cin >> a >> b >> c;
    for (int i = 2; i < min(min(a, b), c); i++)
    {
        if(a%i == b%i && b%i == c%i )
        {
            cout << i << endl;
            break;
        }
    }
    
    return 0;
}
