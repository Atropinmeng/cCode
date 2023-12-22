#include <stdio.h>
int main()
{
    int arr[10];
    int max = 0;
    for (int i = 0; i < 10; i++)
    {
        printf("请输入第%d个数", i + 1);
        scanf("%d", &arr[i]);
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("这十个数中最大的是%d", max);

    return 0;
}
