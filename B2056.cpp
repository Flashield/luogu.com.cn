#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
    int num;
    long sum=0;
    cin >> num;
    int a[num];
    for (int i=0; i<num; i++) 
    {
        cin >> a[i];
        sum+=a[i];
    }
    cout<<sum<<" "<<fixed<<setprecision(5)<<double(sum)/num << endl;

    return 0;
}
