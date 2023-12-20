// https://www.luogu.com.cn/problem/B2077
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    long n, result;
    cin >> n;
    result = n;
    while (result != 1)
    {
        if (result % 2)
        {
            cout << result;
            result = result*3+1;
            cout <<"*3+1="<<result << endl;
        }
        else
        {
            cout << result;
            result = result/2;
            cout <<"/2=" << result << endl;
        }
        
    }
    cout << "End" << endl;
    
    return 0;
}
