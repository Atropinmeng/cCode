#include <stdio.h>
int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    if (m < n)
    {
        int temp;
        temp = m;
        m = n;
        n = temp;
    }

    for (int i = m; i > 0; i--)
    {
        if (m % i == 0 && n % i == 0)
        {
            printf("m和n的最大公约数为%d\n", i);
            break;
        }
    }
    return 0;
}