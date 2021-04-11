#include <iostream>
using namespace std;
int main()
{
    int a[7];
    int tmp1, tmp2, max = 0;
    for (int i = 0; i < 7; i++)
    {
        cin >> tmp1 >> tmp2;
        a[i] = tmp1 + tmp2;
        if (a[i] > 8 && a[i] > max)
        {
            max = a[i];
        }
    }
    for (int i = 0; i < 7; i++)
    {
        if (a[i] == max)
        {
            cout << i + 1;
            return 0;
        }
    }
    cout << 0;
    return 0;
}
