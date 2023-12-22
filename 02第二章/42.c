#include <stdio.h>
int main()
{
    int arr[10] = {0};
    for (int i = 0; i < 10; i++)
    {
        printf("请输入第%d个数:", i + 1);
        scanf("%d", &arr[i]);
    }
    int max = arr[0];
    for (int i = 0; i < 10; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    printf("%d", max);

    return 0;
}