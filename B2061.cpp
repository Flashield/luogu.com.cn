#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char const *argv[])
{
    int num;
    int a[11];
    // cout << sizeof(a);
    memset(a, 0, sizeof(a));
    cin >> num;
    int k[num];
    for (int i=0;i<num;i++)
    {
        cin >> k[i];
        a[k[i]]++;
    }
    cout << a[1] << endl << a[5] << endl << a[10] <<endl;
    return 0;
}
