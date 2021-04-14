#include <iostream>
using namespace std;
int main()
{
    int l, r;
    int ge = 0;
    cin >> l >> r;
    for (int i = l; i <= r; i++)
    {
        if (i % 10 == 2)
        {
            ge++;
        }
        if (i % 100 / 10 == 2)
        {
            ge++;
        }
        if (i % 1000 / 100 == 2)
        {
            ge++;
        }
        if (i % 10000 / 1000 == 2)
        {
            ge++;
        }
        if (i % 100000 / 10000 == 2)
        {
            ge++;
        }
    }
    cout << ge;
    return 0;
}
