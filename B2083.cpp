// https://www.luogu.com.cn/problem/B2083
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a, b, f;
    char c;
    cin >> a >> b >> c >> f;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            if (i==0||i==a-1||(f==0&&(j==0||j==b-1))||(f==1))
            {
                cout << c;
            }
            else
            {
                cout<<" ";
            }
        }
        cout << endl;
        
    }
    
    return 0;
}
