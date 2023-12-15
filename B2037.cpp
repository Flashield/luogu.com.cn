#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    // if (n % 2 == 1) cout <<"odd";
    if (n % 2) cout <<"odd"; //区别在负数上
    else cout << "even";
    return 0;
}
