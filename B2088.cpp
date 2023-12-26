// https://www.luogu.com.cn/problem/B2088
#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
    double price[10]={28.9,32.7,45.6,78,35,86.2,27.8,43,56,65};
    double sum=0;
    long long n;
    for (int i = 0; i < 10; i++)
    {
        cin >> n;
        sum += n*price[i];
    }

    cout << fixed << setprecision(1) << sum << endl;
    
    return 0;
}
