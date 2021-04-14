#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int n, k;
    scanf("%d%d", &n, &k);
    int ge = n;
    while (true)
    {
        n = n + ge / k;
        ge = ge / k + ge % k;
        if (ge < k)
        {
            break;
        }
    }
    printf("%d", n);
    return 0;
}
