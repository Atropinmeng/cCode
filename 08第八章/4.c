#include <stdio.h>

void move(int *arry, int n, int m)
{
    int end_idx = n - m; // �ҵ�������m�����ݵ�λ�ã�Ҳ����Ҫ�ƶ��������ײ������ݵ���ʼλ��
    for (int i = 0; i < m; i++)
    {
        int *p = arry + end_idx + i;
        int tmp = *p;
        for (int j = end_idx + i; j > i; j--)
        {
            *p = *(p - 1);
            p--;
        }
        *(arry + i) = tmp;
    }
}

int main()
{
    int number[32], n, m, i;
    printf("Please enter the number of numbers:");
    scanf("%d", &n);
    printf("Please enter %d numbers: ", n);
    scanf("%d", &m);
    move(number, n, m);
    for (i = 0; i < n; i++)
    {
        printf("%d ", number[i]);
    }
    printf("\n");
    return 0;
}