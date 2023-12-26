// https://www.luogu.com.cn/problem/B2089
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int* number = new int[n];
    for (int i = n-1; i >= 0; i--)
    {
        cin >> number[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << number[i] << " ";
    }    
    return 0;
}
