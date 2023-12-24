// https://www.luogu.com.cn/problem/B2081
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    long n, s=0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i%7!=0 && i%10!=7 && (i/10)%10!=7)
        {
            s += i*i;
        }
        
    }
    cout << s << endl;
    
    return 0;
}
