#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double n ,r=0,ans;
    cin>>n;
    for(int i=1;i<=n;i++){
        ans = 1;
        for(int j=1;j<=i;j++){
            ans=ans*j;
        }
        r+=ans;

    }
    cout<<fixed<<setprecision(0)<<r;
    return 0;
}