/*给定一个字符，用它构造一个底边长5 个字符，高 3 个字符的等腰字符三角形。*/

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int height=3;
    char singleChar;
    cout<<"输入一个字符：";
    cin>>singleChar;
    for (int i=0;i<height;i++)
    {
        for (int j=0; j<height*2-1; j++)
        {
            if (abs(height-j-1)>=i+1)
            {
                cout<<" ";
            }
            else
            {
                cout<<singleChar;
            }
        }
        cout<<endl;
    }
    return 0;
}
