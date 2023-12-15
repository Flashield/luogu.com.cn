#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a, b;
    char ope;
    cin >> a >> b >> ope;
    switch (ope)
    {
    case '+':
        cout << a + b << endl;
        break;
    case '-':
        cout << a - b << endl;
        break;
    case '*':
        cout << a * b << endl;
        break;
    case '/':        
        cout << (b==0 ? "Divided by zero!": to_string(a / b)) << endl;
        break;
    default:
        cout << "Invalid operator!" << endl;
        break;
    }
    return 0;
}
