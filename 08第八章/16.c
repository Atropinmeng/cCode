#include <stdio.h>
#include <string.h>
void count_digit(char *str)
{
    int digit[32], count = 0;
    char *ptr = str;
    int i = 0, str_len = strlen(str);
    while (i < str_len)
    {
        if (*(ptr + i) >= '0' && *(ptr + i) <= '9')
        {
            int len = 1; // ����ͳ���������ֵĸ���
            while (*(ptr + i + len) >= '0' && *(ptr + i + len) <= '9' && (i + len) < str_len)
            { // �ҳ��ӵ�ǰλ���������ֵĸ���
                len++;
            }
            int sum = *(ptr + i + len - 1) - '0'; // �Ȼ�ȡ��λ��������
            int unit = 1;                         // ÿһλ�ĵ�λ����ʮλ��ʼÿ�γ���10��Ϊ��λ
            for (int j = len - 2; j >= 0; j--)
            { // ���������������
                unit *= 10;
                sum += (*(ptr + i + j) - '0') * unit;
            }
            digit[count++] = sum;

            i += len; // i��Ҫ����len�ĳ��ȣ�Խ��������֣���ֹһ�����������е��ַ��ظ���
            continue;
        }
        i++;
    }
    for (int i = 0; i < count; i++)
    {
        printf("%d ", digit[i]);
    }
    return;
}
int main()
{
    char buf[1024] = {0};
    printf("Please enter a string with numbers:\n");
    gets(buf);
    count_digit(buf);
    printf("\n");

    return 0;
}