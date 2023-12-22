#include <stdio.h>
#include <math.h>
int main()
{
    int h;
    double x, y, m, n, r;
    printf("任意输入一点坐标:");
    scanf("%lf,%lf", &x, &y);
    if (fabs(x) > 3 || fabs(y) > 3)
    {
        h = 0;
        printf("The height of the coordinate(%f,%f):h = %d\n", x, y, h);
        return 0;
    }
    m = fabs(x) - 2;
    n = fabs(y) - 2;
    r = sqrt(m * m + n * n);
    if (r > 1)
        h = 0;
    else
        h = 10;
    printf("The height of the coordinate(%f,%f):h = %d\n", x, y, h);

    return 0;
}