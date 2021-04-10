#include <iostream>
int a[11];
using namespace std;
int main()
{
    for (int i = 1; i <= 10; ++i)
    {
        cin >> a[i];
    }
    int x, n = 0;
    cin >> x;
    for (int i = 1; i <= 10; ++i)
    {
        if (a[i] <= (x + 30)) // 苹果高度小于手指够得到的均计算在内
        {
            n++;
        }
    }
    cout << n;
    return 0;
}
