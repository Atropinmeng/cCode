#include <stdio.h>
#include <math.h>
int main()
{
    double p, n = 10, r = 0.07;
    p = pow(1 + r, n);
    printf("10年后我国的国民生产总值与现在相比增长的百分比为:%lf", p);
    return 0;
}