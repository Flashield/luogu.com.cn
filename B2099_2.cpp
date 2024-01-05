// https://www.luogu.com.cn/problem/B2099
#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    double matrix[5][5];
    int n, m;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> matrix[i][j];
        }
    }
    cin >> n >> m;
    for (int j = 0; j < 5; j++)
    {
        swap(matrix[n-1][j],matrix[m-1][j]);
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;        
    }
    return 0;
}
