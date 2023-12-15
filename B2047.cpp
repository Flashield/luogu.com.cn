#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
    double x, y;
    cin >> x;
    if (0<=x && x<5) y = -1*x +2.5;
    else if (5<=x && x<10)
    {
        y = 2-1.5*(x-3)*(x-3);
    }
    else if (10<=x && x<20)
    {
        y = x/2-1.5;
    }
    cout << fixed << setprecision(3) << y << endl;
    
    return 0;
}

/*
#include<bits/stdc++.h>
#define up(l,r,i) for(int i=l,END##i=r;i<=END##i;++i)
#define dn(r,l,i) for(int i=r,END##i=l;i>=END##i;--i)
using namespace std;
typedef long long i64;
const int INF =2147483647;
const double F[3][4]={{2.5,-1,0},{-11.5,9,-1.5},{-1.5,0.5,0}};
const double P[3]={5,10,20};
double x;
int main(){
    scanf("%lf",&x); up(0,2,i) if(x<P[i])
    printf("%.3lf\n",F[i][0]+F[i][1]*x+F[i][2]*x*x),exit(0);
    return 0;
}
*/
