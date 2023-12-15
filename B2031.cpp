#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

double calc_s(double Xa, double Ya,double Xb,double Yb)
{
    return sqrt(pow(Xa-Xb,2)+pow(Ya-Yb,2));
}

int main(int argc, char const *argv[])
{
    double X1, Y1, X2, Y2, X3, Y3;
    double A, B, C, P;
    cin >> X1 >> Y1 >> X2 >> Y2 >> X3 >> Y3;
    A = calc_s(X1, Y1, X2, Y2);
    B = calc_s(X1, Y1, X3, Y3);
    C = calc_s(X2, Y2, X3, Y3);
    P = (A + B + C)/2;
    cout<< fixed <<setprecision(2)<<sqrt(P*(P-A)*(P-B)*(P-C))<<endl;
    return 0;
}
