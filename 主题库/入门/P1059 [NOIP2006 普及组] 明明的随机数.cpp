#include <iostream>
#include <cstring>
int shu[101];
using namespace std;
int main()
{
    memset(shu, 0, sizeof(shu));
    int n, ge = 1;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> shu[i];
    }
    for (int i = 1; i <= n; i++)
    {
        int k = i;
        for (int j = i + 1; j <= n; j++)
        {
            if (shu[j] < shu[k])
            {
                k = j;
            }
        }
        if (k != i)
        {
            int temp = shu[i];
            shu[i] = shu[k];
            shu[k] = temp;
        }
    }
    int x = shu[1];
    for (int i = 2; i <= n; i++)
    {
        if (shu[i] != x)
        {
            x = shu[i];
            ge++;
        }
        else
        {
            x = shu[i];
            shu[i] = 0;
        }
    }
    cout << ge << endl;
    for (int i = 1; i <= n; i++)
    {
        if (shu[i] != 0)
        {
            cout << shu[i] << " ";
        }
    }
    return 0;
}
