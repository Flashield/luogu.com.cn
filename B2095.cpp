// https://www.luogu.com.cn/problem/B2095
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int main(int argc, char const *argv[])
{
    int n, n_max=0, n_min=0;
    cin >> n;
    double* cells = new double[n];
    double min, max, sum=0, m_max=0;
    for (int i = 0; i < n; i++)
    {
        cin >> cells[i];
        // 记录数值改成记录下标
        cells[i]>cells[n_max]?n_max=i:false;
        cells[i]<cells[n_min]?n_min=i:false;
        sum += cells[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (i!=n_max && i!=n_min)
        {
            fabs(cells[i]-(sum-cells[n_max]-cells[n_min])/(n-2))>m_max?m_max=fabs(cells[i]-(sum-cells[n_max]-cells[n_min])/(n-2)):false;
        }
        
    }
    
    cout<<fixed<<setprecision(2)<<(sum-cells[n_max]-cells[n_min])/(n-2)<<" "<<fixed<<setprecision(2)<<m_max<<endl;
    
    return 0;
}
