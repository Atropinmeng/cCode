#include <stdio.h>
int **transform(int **arry, int row_count, int col_count)
{
    // �б��У��б��У����еĸ�������ǰ�еĸ������еĸ�������ǰ�еĸ���
    int **p = NULL;
    // �������ж����У�ȡ������ǰ�ж����У�Ȼ�������ַ�ռ�
    p = (int **)malloc(sizeof(int *) * col_count);
    for (int i = 0; i < col_count; i++)
    {
        for (int j = 0; j < row_count; j++)
        {
            // ��ά����Ĵ洢ʱ��ƽ���ģ� ���ʵ�j�е�i�е����ݣ�Ӧ����arry + j * ���� + i
            //  j����������У�������ԭ�������
            p[i][j] = (arry + col_count * j)[i];
        }
    }
    return p;
}

int main()
{
    int arry[3][4];
    printf("Please enter a 3 x 4 matrix: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &arry[i][j]);
        }
    }
    int **p = transform(arry, 3, 4);
    printf("\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", p[i][j]);
        }
        free(p[i]);
        printf("\n");
    }
    free(p);
    return 0;
}