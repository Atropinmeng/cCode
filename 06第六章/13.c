#include <stdio.h>
int main()
{
    char s1[100] = {0};
    char s2[50] = {0};
    int index1 = 0, index2 = 0;
    printf("请输入字符串s1:");
    scanf("%s", s1);

    printf("请输入字符串s2:");
    scanf("%s", s2);

    printf("将s2拼接在s1之后:");
    while ('\0' != s1[index1])
        index1++;

    while (s1[index1++] = s2[index2++])
        ;

    printf("%s\n", s1);
    return 0;
}