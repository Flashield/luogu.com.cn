#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
    int a, b;
    cin>>a>>b;
    cout<<fixed<<setprecision(3)<<double(b)/a*100<<"%"<<endl;
    return 0;
}
