#include <stdio.h>
#include <string.h>
void ReverseString(char str[])
{
    int start, end;
    char tmp;
    start = 0;
    end = strlen(str) - 1; // �ַ������±��0��ʼ������-1
    while (start < end)
    {
        tmp = str[start];
        str[start] = str[end];
        str[end] = tmp;

        start++;
        end--;
    }
}

int main()
{
    char str[100] = {0};
    printf("������һ���ַ���:>");
    scanf("%s", str);
    printf("ԭʼ�ַ���Ϊ:>%s\n", str);
    ReverseString(str);
    printf("�����ַ���Ϊ:>%s\n", str);

    return 0;
}