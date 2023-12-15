#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    long n;
    cin >> n;
    if (n > 0) 
    {
        cout<<"positive"<<endl;
    }
    else if (n < 0)
    {
        cout<<"negative"<<endl;
    }
    else
    {
        cout<<"zero"<<endl;
    }
    
    
    return 0;
}
