#include <stdio.h>
#include <math.h>
int main()
{
    double m;
    int d = 300000, p = 6000;
    double r = 0.01;
    m = log(p / (p - d * r)) / log(1 + r);
    printf("�����������Ҫ��ʱ��Ϊ%.1f��", m);
}