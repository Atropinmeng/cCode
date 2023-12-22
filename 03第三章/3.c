#include <stdio.h>
#include <math.h>
int main()
{
    double m;
    int d = 300000, p = 6000;
    double r = 0.01;
    m = log(p / (p - d * r)) / log(1 + r);
    printf("还清贷款所需要的时间为%.1f月", m);
}