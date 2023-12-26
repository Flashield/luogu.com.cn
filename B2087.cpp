// https://www.luogu.com.cn/problem/B2087
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, m, cnt=0;
    cin >> n;
    int* numbers = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }
    cin >> m;
    for (int i = 0; i < n; i++)
    {
        numbers[i]==m?cnt++:0;
    }
    cout << cnt << endl;
    
    return 0;
}