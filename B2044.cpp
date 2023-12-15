#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int num = 3, num_score = 0;
    int score[num];
    // cin >> score[0] >> score[1] >> score[2];
    for (int i=0; i<num; i++)
    {
        cin >> score[i];
        score[i] < 60 ? num_score++ : 0;
    }
    cout << (num_score == 1 ? 1 : 0) << endl;
    return 0;
}
