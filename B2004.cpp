// 读入三个整数，按每个整数占 8 个字符的宽度，右对齐输出它们，按照格式要求依次输出三个整数，之间以一个空格分开。

#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
    long long a, b, c;
    cin >>a>>b>>c;
    cout<<setw(8)<<a<<" "<<setw(8)<<b<<" "<<setw(8)<<c;
    return 0;
}
