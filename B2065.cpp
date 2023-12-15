#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, a, b;
    cin >> n;
    double* examples = new double[n];
    for (int i=0; i<n; i++)
    {
        cin >> a >> b;
        examples[i] = double(b) / a;
    }
    for (int i=0; i<n-1; i++)
    {
        if (examples[0]-examples[i+1]>0.05)
        {
            cout << "worse"<<endl;
        }
        else if (examples[i+1]-examples[0]>0.05)
        {
            cout << "better"<<endl;
        }
        else
        {
            cout << "same"<<endl;
        }
    }
    return 0;
}
