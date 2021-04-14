#include <algorithm>
#include <iostream>
using namespace std;
int a[100001];
int main()
{
    int n, d, ans = 0;
    cin >> n >> d;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
    for (int i = 1; i < n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (a[j] - a[i] <= d)
            {
                ans++;
            }
            else
            {
                break;
            }
        }
    }
    cout << ans;
    return 0;
}
