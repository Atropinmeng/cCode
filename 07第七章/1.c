#include <stdio.h>

// ���Լ��
size_t GCD(size_t a, size_t b)
{
    size_t gcd;
    gcd = a > b ? b : a;
    while (gcd > 1)
    {
        if ((a % gcd == 0) && (b % gcd == 0))
            return gcd;
        gcd--;
    }
    return gcd;
}

// ��С������
size_t LCM(size_t a, size_t b)
{
    size_t lcm;
    lcm = a > b ? a : b;
    while (1)
    {
        if ((lcm % a == 0) && (lcm % b == 0))
            break;
        lcm++;
    }
    return lcm;
}

int main()
{
    size_t a, b, result;
    printf("��������������:");
    scanf("%d %d", &a, &b);

    result = GCD(a, b);
    printf("%d��%d�����Լ��Ϊ:%d\n", a, b, result);
    result = LCM(a, b);
    printf("%d��%d����С������Ϊ:%d\n", a, b, result);
}