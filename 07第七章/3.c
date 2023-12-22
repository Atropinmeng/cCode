#include <stdio.h>
#include <stdbool.h>

bool IsPrime(int value)
{
    for (int i = 2; i < value / 2; ++i)
    {
        if (value % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int value;
    bool flag;
    printf("������ value:>");
    scanf("%d", &value);

    flag = IsPrime(value);
    if (flag)
        printf("%d ������.\n", value);
    else
        printf("%d ��������.\n", value);

    return 0;
}