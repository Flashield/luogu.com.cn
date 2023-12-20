// https://www.luogu.com.cn/problem/B2074
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a, b, c;
    string weekday[7]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
    cin >> a >> b;
    c =  a;
    for (int i = 0; i < b-1; i++)
    {
        c %= 7;
        c *= a;
    }
    cout << weekday[c%7] <<endl;
    return 0;
}
