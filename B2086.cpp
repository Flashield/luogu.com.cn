// https://www.luogu.com.cn/problem/B2086
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    long long a, b, c, n=0;
    cin >> a >> b >> c;
    for (long i = 0; i <= c; i++)
    {
        for (long j = 0; j <= c; j++)
        {
            if ((i*a+j*b)==c)
            {
                n++;
            }
            
        }
        
    }
    cout << n << endl;
    return 0;
}
