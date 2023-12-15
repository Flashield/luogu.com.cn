#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    long n;
    int flag = 0;
    cin >> n;
    if (!(n%3)) 
    {
        cout << 3, flag++;
    }
    if (!(n%5))
    {
        cout << (flag ? " 5" : "5");
        flag++;
    }
    if (!(n%7))
    {
        cout << (flag ? " 7" : "7");
    }
    if (n%3 && n&&5 && n%7)
    {
        cout << n;
    }
    cout << endl;

    return 0;
}
