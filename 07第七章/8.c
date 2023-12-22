#include <stdio.h>

void OutString(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        if (str[i + 1] == '\0') // 清除最后一个空格不输出
            break;
        printf("%c", ' ');
        i++;
    }
    printf("\n");
}

int main()
{
    char str[4] = {0};
    printf("inut four digits:");
    scanf("%s", str);
    OutString(str);

    return 0;
}