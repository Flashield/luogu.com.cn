#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
    double a, b, c, x1, x2;
    cin >> a >> b >> c;
    if (b*b-4*a*c < 0)
    {
        cout << "No answer!" <<endl;
    }
    else if (b*b-4*a*c == 0)
    {
        cout << "x1=x2=" <<fixed<<setprecision(5)<<(-b-sqrt(b*b-4*a*c))/(2*a) <<endl;
    }
    else if (b*b-4*a*c > 0)
    {
        x1 = (-b-sqrt(b*b-4*a*c))/(2*a);
        x2 = (-b+sqrt(b*b-4*a*c))/(2*a);
        cout <<"x1="<<fixed<<setprecision(5)<<min(x1,x2)<<";x2="<<fixed<<setprecision(5)<<max(x1,x2)<<endl;
        // x1<x2 ? cout <<"x1="<<fixed<<setprecision(5)<<x1<<";x2="<<fixed<<setprecision(5)<<x2<<endl : cout <<"x1="<<fixed<<setprecision(5)<<x2<<";x2="<<fixed<<setprecision(5)<<x1<<endl;
    }
    
    return 0;
}
