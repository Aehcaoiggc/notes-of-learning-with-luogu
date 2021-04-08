#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

double a, b, c, d;

double f(double x); // 返回f(x)的值
void find(double x, double y);

int main()
{
    cin >> a >> b >> c >> d;
    for (int i = -101; i <= 99; i++)
    {
        if (f(i) * f(i + 1.0) < 0)
        {
            find(i, i + 1.0);
        }
        else if (f(i + 1.0) == 0)
        {
            printf("%.2lf ", i + 1.0);
        }
    }
    return 0;
}

double f(double x)
{
    return a * pow(x, 3) + b * pow(x, 2) + c * x + d;
}

void find(double x, double y)
{
    if (y - x < 0.001)
    {
        printf("%.2lf ", y);
    }
    else
    {
        double mid = (x + y) / 2.0;
        if (f(mid) == 0)
        {
            printf("%.2lf ", mid);
        }
        else
        {
            if (f(x) * f(mid) < 0)
            {
                find(x, mid);
            }
            else
            {
                find(mid, y);
            }
        }
    }
    return;
}
