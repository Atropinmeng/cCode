#include <stdio.h>
#include <math.h>
int main()
{
    double p, n = 10, r = 0.07;
    p = pow(1 + r, n);
    printf("10����ҹ��Ĺ���������ֵ��������������İٷֱ�Ϊ:%lf", p);
    return 0;
}