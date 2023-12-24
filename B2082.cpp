// https://www.luogu.com.cn/problem/B2082
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    long L, R, n=0;
    cin >> L >> R;
    for (long i = L; i <= R; i++)
    {
        long j = i;
        while (j)
        {
            n += j%10==2?1:0;
            j /= 10;
        }
        
    }
    cout << n << endl;
    
    return 0;
}
