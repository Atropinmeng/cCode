#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c;
    double delta, x1, x2;
    scanf("%d %d %d", &a, &b, &c);
    delta = sqrt(b * b - 4 * a * c);
    if (delta > 0)
    {
        x1 = ((-1 * b) + sqrt(delta)) / 2;
        x2 = ((-1 * b) - sqrt(delta)) / 2;
        printf("��������������ȵ�ʵ����:x1 = %d, x2 = %d", x1, x2);
    }
    else if (delta = 0)
    {
        x1 = x2 = (-1 * b) / 2;
        printf("������������ȵ�ʵ����:x1 = x2 = %d", x1);
    }
    else
        printf("������ʵ����");
}