#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int num;
    cin >> num;
    int gold[num], silver[num], bronze[num];
    int sum_gold=0, sum_silver=0, sum_bronze=0;
    for (int i=0; i<num; i++)
    {
        cin >> gold[i] >> silver[i] >> bronze[i];
        sum_gold += gold[i];
        sum_silver += silver[i];
        sum_bronze += bronze[i];
    }
    cout << sum_gold <<" "<< sum_silver <<" "<< sum_bronze <<" "<<sum_gold+sum_silver+sum_bronze<<endl;
    return 0;
}
