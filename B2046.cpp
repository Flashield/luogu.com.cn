#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    double distance;
    cin >> distance;
    if (distance / 3 + 23+27 < distance/1.2) cout<<"Bike";
    else if (distance / 3 + 23+27 == distance/1.2) cout << "All";
    else if (distance / 3 + 23+27 >= distance/1.2) cout << "Walk";
    cout << endl;
    return 0;
}
