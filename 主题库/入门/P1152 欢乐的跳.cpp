#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int a[1001], b[1001];
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i < n; i++)
    {
        b[i] = abs(a[i + 1] - a[i]);
    }
    sort(b + 1, b + n);
    for (int i = 1; i < n; i++)
    {
        if (b[i] != i)
        {
            cout << "Not jolly";
            return 0;
        }
    }
    cout << "Jolly";
    return 0;
}
