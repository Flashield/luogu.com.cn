// https://www.luogu.com.cn/problem/B2098
#include <iostream>
#include <map>
using namespace std;

int main(int argc, char const *argv[])
{
    map<long, long> numbers;
    long element;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> element;
        if (!numbers[element])
        {
            cout << element<<" ";
            numbers[element]++;
        }
    }
    
    
    return 0;
}
