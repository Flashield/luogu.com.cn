#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int num, max_score = 0;
    cin >> num;
    int score[num];
    for (int i=0; i<num; i++)
    {
        cin >> score[i];
        max_score=max_score<score[i] ? score[i] : max_score;
    }
    cout<<max_score<<endl;
    return 0;
}
