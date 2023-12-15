#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int weekday;
    cin >> weekday;
    cout << (weekday==1||weekday==3||weekday==5 ? "NO" : "YES") << endl;
    return 0;
}
