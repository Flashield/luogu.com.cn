// https://www.luogu.com.cn/problem/B2090
#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, age;
    cin >> n;
    int * numbers = new int[n];
    int statistic[4]={0,0,0,0};
    for (int i = 0; i < n; i++)
    {
        cin >> age;
        if (age <= 18)
        {
            statistic[0]++;
        }
        else if (age <= 35)
        {
            statistic[1]++;
        }
        else if (age <= 60)
        {
            statistic[2]++;
        }
        else
        {
            statistic[3]++;
        }
    }
    for (int i = 0; i < 4; i++)
    {
        cout<<fixed<<setprecision(2)<<double(statistic[i])/n*100<<"%"<<endl;
    }
    
    
    return 0;
}
