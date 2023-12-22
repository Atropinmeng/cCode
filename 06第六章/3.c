#include <stdio.h>
int main()
{
    int a[3][3] = {{1, 2, 3},
                   {4, 5, 6},
                   {7, 8, 9}};
    int sum;
    for (int i = 0; i < 3; i++)
    {
        sum += (a[i][i] + a[i][2 - i]);
    }
    sum -= a[1][1];
    printf("%d", sum);

    return 0;
}
