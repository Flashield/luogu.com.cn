#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int x;
    char c;
    long fee;
    cin >> x >> c;
    fee = (x<1000 ? 8 : ceil((x-1000.0)/500)*4 + 8);
    fee += (c == 'y' ? 5 : 0);
    cout << fee << endl;
    return 0;
}
