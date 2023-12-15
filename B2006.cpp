/*假设地球上的新生资源按恒定速度增长。照此测算，地球上现有资源加上新生资源可供 x 亿人生活 a 年，或供 y 亿人生活 b 年。

为了能够实现可持续发展，避免资源枯竭，地球最多能够养活多少亿人？*/

#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
    double x, a, y, b;
    cin >> x >> a >> y >> b;
    cout <<fixed<<setprecision(2)<< (y*b - x*a)/(b-a)<< endl;
    return 0;
}
