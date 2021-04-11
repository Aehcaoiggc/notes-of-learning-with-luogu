#include <iostream>
#include <cstdio>
#include <cstring>
int shouru[14];
int zhichu[14];
int chaozhi[14];
using namespace std;
int main()
{
    memset(chaozhi, 0, sizeof(chaozhi));
    int b = 0, a = 0, c;
    for (int i = 1; i <= 12; ++i)
        shouru[i] = 300;
    for (int i = 1; i <= 12; ++i)
        cin >> zhichu[i];
    for (int c = 1; c <= 12; ++c)
    {
        shouru[c] = shouru[c] - zhichu[c];
        if (shouru[c] / 100 >= 1)
        {
            b = b + shouru[c] / 100;
            shouru[c] = shouru[c] % 100;
        }
        if (shouru[c] < 0)
        {
            chaozhi[c] = c;
            shouru[c] = 0;
        }
        shouru[c + 1] = shouru[c + 1] + shouru[c];
    }
    for (int i = 12; i >= 1; i--)
    {
        if (chaozhi[i] == i)
            a = i;
    }
    if (a != 0)
        cout << '-' << a;
    else
        cout << shouru[13] + b * 120 << endl;
    return 0;
}
