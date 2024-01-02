// https://www.luogu.com.cn/problem/B2097
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, n_cnt=0, max_cnt=0;
    cin >> n;
    long* numbers = new long[n];
    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
        if (numbers[i]==numbers[i-1] && i>0)
        {
            n_cnt ++;
        }
        else
        {
            n_cnt>max_cnt?max_cnt=n_cnt:false;
            n_cnt = 0;
        }
        
    }
    cout << max_cnt+1 << endl;
    
    return 0;
}
