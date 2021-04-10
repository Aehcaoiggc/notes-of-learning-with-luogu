#include <iostream>
using namespace std;
int main()
{
    int n = 0, k;
    double Sn = 0;
    cin >> k;
    while (Sn <= k)
    {
        n = n + 1;
        Sn = Sn + (1.0 / n);
    }
    cout << n;

    return 0;
}
