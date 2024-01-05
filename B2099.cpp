// https://www.luogu.com.cn/problem/B2099
#include <iostream>
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
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == n-1)
            {
                cout<<matrix[m-1][j]<<" ";
            }
            else if (i == m-1)
            {
                cout<<matrix[n-1][j]<<" ";
            }
            else
            {
                cout<<matrix[i][j]<<" ";
            }
        }
        cout<<endl;
        
    }
    
    
    return 0;
}
