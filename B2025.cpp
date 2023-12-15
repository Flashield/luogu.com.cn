// 用 * 构造一个对角线长 5 个字符，倾斜放置的菱形。


#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char const *argv[])
{
    char chr;
    // cin >> chr;
    chr = '*';

    int num = 25;
    int center = (num-1)/2;
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            // 用几何法求解
            if (-i<=j-center&&-i<=-j+center&&-i>=-j-center&&-i>=j-3*center)
            {
                cout<<chr;
            }
            else
            {
                cout<<" ";
            }
            
        }
        cout<<endl;
        
    }
    
    return 0;
}
