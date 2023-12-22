#include <stdio.h>
int main()
{
    int a, b, c, d, tmp;
    printf("请输入四个整数:");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if (a > b)
    {
        tmp = a;
        a = b;
        b = tmp;
    }
    if (a > c)
    {
        tmp = a;
        a = c;
        c = tmp;
    }
    if (a > d)
    {
        tmp = a;
        a = d;
        d = tmp;
    }
    // 比较第二小的数
    if (b > c)
    {
        tmp = b;
        b = c;
        c = tmp;
    }
    if (b > d)
    {
        tmp = b;
        b = d;
        d = tmp;
    }
    // 比较第三、第四小的数
    if (c > d)
    {
        tmp = c;
        c = d;
        d = tmp;
    }
    printf("%d %d %d %d", a, b, c, d);
    return 0;
}