#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= 5000; i++) // 5000*5000/2>1e7
    {
        if (((i + 1) * i / 2 < n) && ((i + 2) * (i + 1) / 2 >= n))
        // 不在边长为i的直角三角形上，在边长为i+1的直角三角形上
        {
            n = n - (i + 1) * i / 2; // 减去上一级直角三角形位数后即得到下一三角形的第几个
            cout << i + 1 - (n - 1) << "/" << n;
            break;
        }
    }
    return 0;
}
