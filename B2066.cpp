// https://www.luogu.com.cn/problem/B2066

#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
    double x, y, people, n, total_time;
    total_time = 0;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> x >> y >> people;
        total_time += sqrt(pow(x, 2) + pow(y, 2)) / 50 * 2 + 1.5*people;
    }
    cout << int(ceil(total_time)) << endl;
    
    return 0;
}
