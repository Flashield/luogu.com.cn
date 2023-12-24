// https://www.luogu.com.cn/problem/B2080
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    double x;
    int n;
    cin >> x >> n;
    cout<<fixed << setprecision(2) << (1-pow(x,n+1))/(1-x)<<endl;
    return 0;
}
