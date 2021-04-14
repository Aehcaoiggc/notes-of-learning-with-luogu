#include <iostream>
using namespace std;
bool a[101];
int main()
{
    int n;
    cin >> n;
    cout << n << endl;
    for (int i = 1; i <= n; i++) // 表示第几次翻
    {
        for (int j = 1; j <= n; j++) // 表示翻第几枚硬币
        {
            if (j != i)
            {
                if (a[j])
                {
                    a[j] = false;
                }
                else
                {
                    a[j] = true;
                }
            }
            cout << a[j];
        }
        cout << endl;
    }
    return 0;
}
