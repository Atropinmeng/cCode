#include <stdio.h>
#include <math.h>
int main()
{
    printf("������һ��С��1000������:");
    int a;
scan:
    scanf("%d", &a);

    if (a < 0 || a > 1000)
    {
        printf("������������������");
        goto scan;
    }
    else
    {
        a = sqrt(a);
        printf("��������ƽ����Ϊ:%d", a);
    }
    return 0;
}