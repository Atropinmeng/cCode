#include <stdio.h>
#include <math.h>
int main()
{
    printf("请输入一个小于1000的正数:");
    int a;
scan:
    scanf("%d", &a);

    if (a < 0 || a > 1000)
    {
        printf("输入有误！请重新输入");
        goto scan;
    }
    else
    {
        a = sqrt(a);
        printf("该整数的平方根为:%d", a);
    }
    return 0;
}