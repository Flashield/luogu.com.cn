// https://www.luogu.com.cn/problem/B2076
#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char const *argv[])
{
    double h;
    cin >> h;
    cout<< h*((1-pow(0.5,10))/(1-.5)+0.5*(1-pow(0.5,9))/(1-.5))<<endl;
    cout<< h*pow(1/2., 10) <<endl;
    return 0;
}
