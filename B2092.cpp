// https://www.luogu.com.cn/problem/B2092
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    bool* laps = new bool[n];
    for (int i = 0; i < n; i++)
    {
        laps[i] = true;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            j%i==0?laps[j-1]=!laps[j-1]:0;
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        if(laps[i]==0)
        {
            cout<<i+1<<" ";
        }
    }
    return 0;
}
