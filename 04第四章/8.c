#include <stdio.h>
int main()
{
    int score;
    char a;
    printf("������ɼ�:");
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
    printf("�ɼ��ȼ�Ϊ:%c", a);
    return 0;
}