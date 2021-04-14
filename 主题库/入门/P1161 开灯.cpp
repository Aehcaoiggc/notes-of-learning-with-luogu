#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
    int b[5001];
    double a[5001];
    bool c[2000001];
    for (int i = 1; i <= 5001; i++)
    {
        a[i] = 0;
    }
    memset(b, 0, sizeof(b));
    for (int i = 1; i <= 2000001; i++)
    {
        c[i] = false;
    }
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i] >> b[i];
        for (int j = 1; j <= b[i]; j++)
        {
            int temp = j * a[i];
            if (c[temp] == true)
            {
                c[temp] = false;
            }
            else
            {
                c[temp] = true;
            }
        }
    }
    for (int i = 1; i <= 2000001; i++)
    {
        if (c[i] == true)
        {
            printf("%d", i);
            i = 2000002;
        }
    }
    return 0;
}
