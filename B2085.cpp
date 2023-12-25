// https://www.luogu.com.cn/problem/B2085
#include <iostream>
using namespace std;

bool is_Prime(long long n)
{
    for(int j = 2; j*j<=n; j++)
    {
        if (n%j==0)
        {
            return 0;
        }
        
    }
    return 1;
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    long long i=1;
    while (n)
    {
        i++;
        if (is_Prime(i))
        {
            
            n--;
        }        
        
    }
    cout << i << endl;    
    return 0;
}

