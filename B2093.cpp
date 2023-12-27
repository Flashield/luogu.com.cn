// https://www.luogu.com.cn/problem/B2093
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, x;
    cin >> n;
    int* numbers = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }
    cin >> x;
    for (int i = 0; i < n; i++)
    {
        if(numbers[i]==x)
        {
            cout<<i<<endl;
            return 0;
        }
    }
    cout << -1 << endl;
    
    return 0;
}
