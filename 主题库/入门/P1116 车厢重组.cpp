#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
int a[10000];
int main()
{
    int n;
    cin >> n;
    memset(a, 0, 10000);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int b = 0, temp;
    // 双重循环，以此寻找交换
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                b++;
            }
        }
    }
    cout << b;
    return 0;
}
