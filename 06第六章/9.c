#include <stdio.h>
int main()
{
    int array[15] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
    int left = 0;
    int right = sizeof(array) / sizeof(array[0]);
    int key = 0;

    printf("请输入要查找的数字:");
    scanf("%d", &key);

    // 二分查找
    while (left < right)
    {
        // 找到中间位置
        int mid = left + ((right - left) >> 1);
        if (key == array[mid])
        {
            printf("%d\n", mid);
            break;
        }
        else if (key < array[mid])
        {
            right = mid;
        }
        else
        {
            left = mid + 1;
        }
    }
    if (left >= right)
        printf("无此数\n");
    return 0;
}