#include <stdio.h>

int letter, digit, space, others;

void CountChar(char str[])
{
    int i;
    for (i = 0; str[i] != '\0'; i++)
    {
        // ͳ����ĸ
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'z'))
            letter++;
        else if (str[i] >= '0' && str[i] <= '9') // ͳ������
            digit++;
        else if (str[i] == ' ') // ͳ�ƿո�
            space++;
        else
            others++; // ͳ�������ַ�
    }
}

int main()
{
    char text[80];
    printf("input string:\n");
    gets(text);
    printf("string: %s\n", text);

    CountChar(text);
    printf("\nletter:%d\ndigit:%d\nspace:%d\nothers:%d\n", letter, digit, space, others);
    return 0;
}