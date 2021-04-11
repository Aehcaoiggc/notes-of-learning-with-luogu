#include <iostream>
#include <cmath>
using namespace std;
int prime(int x) // 判断是否是质数
{
    if (x == 1)
    {
        return 0;
    }
    else if (x == 2)
    {
        return 1;
    }
    else if (x == 3)
    {
        return 1;
    }
    else
    {
        for (int j = 2; j <= sqrt(x); j++)
        {
            if (x % j == 0)
            {
                return 0;
            }
        }
        return 1;
    }
}
int main()
{
    int n;
    cin >> n;
    int k = sqrt(n);
    for (int i = 1; i <= k; i++)
    {
        if (n % i == 0) // 两个质数相乘的结果不可能还有其他非质数的因数
        {
            if (prime(n / i) == 1)
            {
                cout << n / i;
                break;
            }
        }
    }
    return 0;
}
