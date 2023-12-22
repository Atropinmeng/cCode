#include <stdio.h>
#include <string.h>
void transform(int *arry, int col_row)
{
    // �ҵ����ֵ
    int max = arry[0],
        max_idx;
    for (int i = 0; i < col_row * col_row; i++)
    {
        if (max < arry[i])
            max = arry[i]; // �ҳ������
        max_idx = i;
    }
    // ������˵õ�������������2���1��Ϊ���ĵ㣨��ʱ������ż���������
    int center_idx = (col_row * col_row) / 2;
    int tmp = arry[center_idx];
    arry[center_idx] = arry[max_idx];
    arry[max_idx] = tmp;
    // �ҵ��ĸ���Сֵ
    int min_idx[4];
    for (int i = 0; i < 4; i++)
    { // ѭ��4�λ�ȡ����Сֵ
        int min_tmp = arry[col_row * col_row - 1];
        for (int j = 0; j < col_row * col_row; j++)
        { // �����������ݣ�����Ƚϻ�ȡ��Сֵ
            int k = 0;
            for (; k < i; k++)
            { // ����Ҫע�����ĳ���±�������Ѿ��ǻ�ȡ������Сֵ,����
                // �����жϣ���Ϊ����϶�����С�ģ�
                if (j == min_idx[k])
                    break;
            }
            if (k != i)
            {
                continue;
            } // k��i��ͬ��ʾj��������Ѿ����ҵ�����С�ļ�������֮
            if (min_tmp > arry[j])
            { // �൱����ʣ�µ������ҵ���С���Ǹ�����
                min_tmp = arry[j];
                min_idx[i] = j; // ���Ҽ�¼������ֵ�λ��
            }
        }
    }
    int change_idx[4];                       // �ȼ����ĸ��ǵ��±꣬���ں�߽��н���
    change_idx[0] = 0;                       // ��һ��Ҫ�û������ݵ��±꣬Ҳ�������Ͻ�
    change_idx[1] = col_row - 1;             // �ڶ���Ҫ�û������ݵ��±꣬Ҳ�������Ͻ�
    change_idx[2] = col_row * (col_row - 1); // ��һ��Ҫ�û������ݵ��±꣬Ҳ�������½�
    change_idx[3] = (col_row * col_row) - 1; // ��һ��Ҫ�û������ݵ��±꣬Ҳ�������½�
    for (int i = 0; i < 4; i++)
    {
        int tmp = arry[change_idx[i]];
        arry[change_idx[i]] = arry[min_idx[i]];
        arry[min_idx[i]] = tmp;
    }
    return;
}
int main()
{
    int arry[5][5];
    printf("Please enter a 5x5 matrix: \n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &arry[i][j]);
        }
    }
    transform(*arry, 5); // ����ά���鵱��һά���鴫�봦�����Ҵ���������
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", arry[i][j]);
        }
        printf("\n");
    }
    return 0;
}
