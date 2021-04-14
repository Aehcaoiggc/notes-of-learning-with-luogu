#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
    char xin[100], zhu[100];
    scanf("%s", &xin);
    scanf("%s", &zhu);
    int length1 = strlen(xin);
    int length2 = strlen(zhu);
    int x = 1, y = 1;
    for (int i = 0; i < length1; i++)
    {
        x = x * (xin[i] - 64);
    }
    for (int i = 0; i < length2; i++)
    {
        y = y * (zhu[i] - 64);
    }
    if (x % 47 == y % 47)
    {
        cout << "GO";
    }
    else
    {
        cout << "STAY";
    }
    return 0;
}
