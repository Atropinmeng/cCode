#include <stdio.h>
int main()
{
    int score;
    char a;
    printf("请输入成绩:");
    scanf("%d", &score);
    if (score < 60)
    {
        a = 'E';
    }
    else if (score < 70)
    {
        a = 'D';
    }
    else if (score < 80)
    {
        a = 'C';
    }
    else if (score < 90)
    {
        a = 'B';
    }
    else
        a = 'A';
    printf("成绩等级为:%c", a);
    return 0;
}