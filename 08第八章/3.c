#include <stdio.h>

void input(int *arry, int len)
{
    for (int i = 0; i < len; i++)
    {
        scanf("%d", &arry[i]);
    }
}

void print(int *arry, int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arry[i]);
    }
    printf("\n");
}

void handle(int *arry, int len)
{
    int max_num = arry[0], min_num = arry[0];
    int *p_max = NULL, *p_min = NULL;
    for (int i = 1; i < len; i++)
    {
        if (min_num > arry[i])
        {
            min_num = arry[i];
            p_min = &arry[i];
        }
        if (max_num < arry[i])
        {
            max_num = arry[i];
            p_max = &arry[i];
        }
    }
    // 最小值与第一个数据交换
    int tmp;
    tmp = *p_min;
    *p_min = arry[0];
    arry[0] = tmp;
    // 最大值与之后一个数据交换
    tmp = *p_max;
    *p_max = arry[len - 1];
    arry[len - 1] = tmp;
}

int main()
{
    int arry[10];
    printf("Please enter ten nums:");
    input(arry, 10);
    handle(arry, 10);
    print(arry, 10);
    return 0;
}