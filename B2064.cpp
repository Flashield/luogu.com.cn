#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int array[n];
    int fib_max = 0;
    for (int i = 0; i < n; i++)
    {   
        cin >> array[i];
        fib_max = fib_max > array[i] ? fib_max : array[i];
    }
    // 按最大的进行数组记录
    // int fib[fib_max];  //为什么long的时候就会报错，而int就没问题？
    long* fib = new long[fib_max];
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i <= fib_max; ++i)
    {
        fib[i]=fib[i-1]+fib[i-2];
    }
    for (int i = 0; i < n; i++)
    {
        cout << fib[array[i]] << endl;
    }
    delete[] fib;
    return 0;
}
