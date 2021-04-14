#include <iostream>
using namespace std;
int main()
{
    int k, sub1, sub2, sub3, ge = 0, i;
    cin >> k;
    for (i = 10000; i <= 30000; i++)
    {
        sub1 = i / 100;
        sub2 = (i / 10) % 1000;
        sub3 = i % 1000;
        // cout << sub1 << " " << sub2 << " " << sub3 << " " << endl;
        if (sub1 % k == 0)
        {
            if (sub2 % k == 0)
            {
                if (sub3 % k == 0)
                {
                    ge = 1;
                    cout << i << endl;
                }
            }
        }
        sub1 = 0;
        sub2 = 0;
        sub3 = 0;
    }
    if (ge == 0)
    {
        cout << "No";
    }
    return 0;
}
