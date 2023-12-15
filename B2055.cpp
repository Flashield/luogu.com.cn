#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
    int num;
    double sum=0;
    cin >> num;
    double a[num];
    for (int i=0; i<num; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    cout<<fixed<<setprecision(4)<<sum/num << endl;

    return 0;
}
