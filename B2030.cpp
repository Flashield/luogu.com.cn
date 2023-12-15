#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    double Xa, Ya, Xb, Yb;
    cin >> Xa >> Ya;
    cin >> Xb >> Yb;
    cout <<fixed<<setprecision(3)<<sqrt(pow(Xa-Xb,2)+pow(Ya-Yb,2))<<endl;
    return 0;
}
