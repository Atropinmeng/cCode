#include <stdio.h>
int main()
{
    int array[] = {2, 8, 3, 9, 5, 7, 1, 4, 0, 6};
    int size = sizeof(array) / sizeof(array[0]);
    // ���ԭ����
    printf("����ǰ����������Ϊ:");
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

        // ������Ԫ�ز�������ĩβʱ�������Ԫ��������ĩβԪ�ؽ���
        if (maxPos != size - i - 1)
        {
            int temp = array[maxPos];
            array[maxPos] = array[size - i - 1];
            array[size - i - 1] = temp;
        }
    }

    // ������������
    printf("ѡ�����������������Ϊ:");
    for (int i = 0; i < size; ++i)
        printf("%d ", array[i]);
    printf("\n");
    return 0;
}