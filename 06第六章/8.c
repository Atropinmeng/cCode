#include <stdio.h>
#define M 3
#define N 4
int main()
{
    int max, min, rowindex, colindex, flag = 0;
    int array[M][N];
    printf("请输入%d行%d列的数组:\n", M, N);
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
            scanf("%d", &array[i][j]);
    }
    for (int i = 0; i < M; ++i)
    {
        // 找到i行上最大的元素,记录该元素在列号colindex
        max = array[i][0];
        for (int j = 0; j < N; ++j)
        {
            if (array[i][j] > max)
            {
                max = array[i][j];
                colindex = j;
            }
        }
        // 找max所在列colindex上最小的元素，并记录其所在的行
        min = array[0][colindex];
        for (int j = 0; j < M; ++j)
        {
            if (array[j][colindex] < min)
            {
                min = array[j][colindex];
                rowindex = j;
            }
        }
        // 如果最小元素与最小元素相同，并且最小元素也在第i行，则为鞍点
        if (max == min && i == rowindex)
        {
            flag = 1;
            printf("鞍点为：%d行%d列的元素%d", rowindex, colindex, max);
            break;
        }
    }
    if (0 == flag)
        printf("没有鞍点");
    return 0;
}