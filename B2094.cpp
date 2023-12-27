// https://www.luogu.com.cn/problem/B2094
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    long * numbers = new long[n];
    long maxN, sum=0;
    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
        i==0?maxN = numbers[i]:false;
        sum += numbers[i];
        maxN = numbers[i]>maxN?numbers[i]:maxN;
    }
    for (int i = 0; i < n; i++)
    {
        numbers[i]==maxN?sum-=numbers[i]:0;
    }
    
    cout<<sum<<endl;
    return 0;
}
