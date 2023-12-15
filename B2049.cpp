#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int num = 3;
    long integer[num], max_num;
    for (int i=0; i<num; i++)
    {
        cin >> integer[i];
        max_num = (i==0 ? integer[0] : (max_num < integer[i] ? integer[i] : max_num));

    }
    cout << max_num << endl;
    return 0;
}
