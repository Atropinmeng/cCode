#include <stdio.h>
int main()
{
    int ret = 0;
    int index = 0;
    char s1[100] = {0};
    char s2[100] = {0};
    printf("«Î ‰»Îs1: ");
    gets(s1);

    printf("«Î ‰»Îs2: ");
    gets(s2);

    while (!(ret = s1[index] - s2[index]) && '\0' != s1[index] && '\0' != s2[index])
    {
        ++index;
    }

    printf("%d\n", ret);
    return 0;
}