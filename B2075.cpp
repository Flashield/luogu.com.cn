// https://www.luogu.com.cn/problem/B2075
#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, char const *argv[])
{
    int a, b, c;
    cin >> a >> b;
    c = a;
    for (int i = 0; i < b-1; i++)
    {   
        c %= 1000;
        c *= a;
    }
    cout<<setw(3)<<setfill('0')<<c%1000<<endl;
    
    return 0;
}
