#include <stdio.h>
int main()
{
    char s1[100] = {0};
    char s2[50] = {0};
    int index1 = 0, index2 = 0;
    printf("�������ַ���s1:");
    scanf("%s", s1);

    printf("�������ַ���s2:");
    scanf("%s", s2);

    printf("��s2ƴ����s1֮��:");
    while ('\0' != s1[index1])
        index1++;

    while (s1[index1++] = s2[index2++])
        ;

    printf("%s\n", s1);
    return 0;
}