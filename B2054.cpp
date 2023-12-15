#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
    int num;
    double sum;
    cin >> num;
    int age[num];
    for (int i=0; i<num; i++) 
    {
        cin >> age[i];
        sum+=age[i];
    }
    cout <<fixed<<setprecision(2)<<sum/num << endl;

    return 0;
}
