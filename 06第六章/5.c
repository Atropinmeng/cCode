#include <stdio.h>
int main()
{
    int a[] = {8, 6, 5, 4, 1};
    for (int i = 0; i < 5 / 2; i++)
    {
        int t;
        t = a[i];
        a[i] = a[4 - i];
        a[4 - i] = t;
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}