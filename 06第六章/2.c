#include <stdio.h>
int main()
{
    int array[] = {2, 8, 3, 9, 5, 7, 1, 4, 0, 6};
    int size = sizeof(array) / sizeof(array[0]);
    // 输出原数组
    printf("排序前数组中数据为:");
    for (int i = 0; i < size; ++i)
        printf("%d ", array[i]);
    printf("\n");

    for (int i = 0; i < size - 1; ++i)
    {
        int maxPos = 0;
        for (int j = 1; j < size - i; ++j)
        {
            if (array[j] > array[maxPos])
                maxPos = j;
        }

        // 如果最大元素不在区间末尾时，将最大元素与区间末尾元素交换
        if (maxPos != size - i - 1)
        {
            int temp = array[maxPos];
            array[maxPos] = array[size - i - 1];
            array[size - i - 1] = temp;
        }
    }

    // 输出排序后数组
    printf("选择排序后数组中数据为:");
    for (int i = 0; i < size; ++i)
        printf("%d ", array[i]);
    printf("\n");
    return 0;
}