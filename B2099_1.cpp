// https://www.luogu.com.cn/problem/B2099
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    // 字符串解法
    string matrix[5];
    int m, n;
    for (int i = 0; i < 5; i++)
    {
        getline(cin, matrix[i]);
    }
    cin >> m >> n;
    swap(matrix[m-1], matrix[n-1]);
    for (int i = 0; i < 5; i++)
    {
        cout << matrix[i] << endl;
    }   
    
    return 0;
}
