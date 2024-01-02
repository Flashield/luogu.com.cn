// https://www.luogu.com.cn/problem/B2098
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    bool is_in;
    cin >> n;
    long* numbers = new long[n];
    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
        is_in = false;
        for (int j = 0; j < i; j++)
        {
            if(numbers[i]==numbers[j] && i!=0) 
            {
                is_in = true;
                break;
            }

        }
        if (!is_in)
        {
            cout<<numbers[i]<<" ";
        }
        
    }
    
    return 0;
}
