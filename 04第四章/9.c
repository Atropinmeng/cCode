#include <stdio.h>
int main()
{
    int a, count = 0;
    printf("请输入一个不多于5位的整数:");
    scanf("%d", &a);
    if (a < 10)
    {
        count = 1;
    }
    else if (a < 100)
    {
        count = 2;
    }
    else if (a < 1000)
    {
        count = 3;
    }
    else if (a < 10000)
    {
        count = 4;
    }
    else
        count = 5;
    printf("这是%d位数\n", count);

    int e = a;
    do
    {
        int c = 0;
        c = e % 10;
        printf("%d\t", c);
        e = e / 10;
    } while (e != 0);
    printf("\n");

    int d;
    if (a > 10000)
    {
        d = a / 10000;
        printf("%d\t", d);
        a = a % 10000;
    }
    if (a > 1000)
    {
        d = a / 1000;
        printf("%d\t", d);
        a = a % 1000;
    }
    if (a > 100)
    {
        d = a / 100;
        printf("%d\t", d);
        a = a % 100;
    }
    if (a > 10)
    {
        d = a / 10;
        printf("%d\t", d);
        a = a % 10;
    }
    if (a < 10)
        printf("%d", a);

    return 0;
}