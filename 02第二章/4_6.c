#include <stdio.h>
#include <math.h>
int main()
{
    int i, j;
    for (i = 100; i <= 200; i++)
    {
        for (j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
                break;
        }
        // if (i % j != 0)
        printf("%d\n", i);
    }

    return 0;
}

// #include <stdio.h> //ͷ�ļ�
// #include <math.h>  //Ϊ������sqrt��ƽ��������
// int main()         // ������
// {
//     int number, i;                             // �������
//     for (number = 100; number < 201; number++) // ���forѭ����Ҫ������100-200֮��
//     {
//         for (i = 2; i <= sqrt(number); i++)
//         {
//             if (number % i == 0) // �������Ϊ0
//                 break;           // ������ǰѭ��
//         }
//         if (number % i != 0)        // ������಻����0����Ϊ����
//             printf("%d\n", number); // �������
//     }
//     return 0; // ��������ֵΪ0
// }