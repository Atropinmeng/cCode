#include <stdio.h>

int main()
{
    int people[128], n;
    printf("Please input how many people: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        people[i] = i + 1; // ��ÿ����˳���ź�
    }
    int remain = n;
    int num_off = 0;
    int *p = NULL;
    while (remain > 1)
    {
        p = people;
        while (p != people + n)
        {
            // ÿ�δӵ�һ��λ�ÿ�ʼ��ֱ�����һ��λ�ã�������һֱ������
            if ((*p) != 0)
            {              // �����λ���˻���
                num_off++; // ����
                if (num_off == 3)
                {
                    *p = 0;
                    num_off = 0;
                    remain--;
                }
            }
            p++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (people[i] != 0)
        {
            printf("Serial number of the remaining person:%d\n", people[i]);
        }
    }

    printf("\n");
    return 0;
}