// https://www.luogu.com.cn/problem/B2096
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    long* numbers = new long[n];
    long n_max=0;
    for (int i = 0; i < n; i++)
    {
        cin>>numbers[i];
        numbers[i]>n_max?n_max=numbers[i]:false;
    }
    long* freqs = new long[n_max+1];
    for (int i = 0; i < n_max; i++)
    {
        freqs[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        freqs[numbers[i]] ++;
    }
    
    for (int i = 0; i <= n_max; i++)
    {
        cout<<freqs[i]<<endl;
    }

    return 0;
}
