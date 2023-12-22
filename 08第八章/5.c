#include <stdio.h>

int main()
{
    int people[128], n;
    printf("Please input how many people: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        people[i] = i + 1; // 对每个人顺序排号
    }
    int remain = n;
    int num_off = 0;
    int *p = NULL;
    while (remain > 1)
    {
        p = people;
        while (p != people + n)
        {
            // 每次从第一个位置开始，直到最后一个位置，报数是一直递增的
            if ((*p) != 0)
            {              // 若这个位置人还在
                num_off++; // 则报数
                if (num_off == 3)
                {
                    *p = 0;
                    num_off = 0;
                    remain--;
                }
            }
            p++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (people[i] != 0)
        {
            printf("Serial number of the remaining person:%d\n", people[i]);
        }
    }

    printf("\n");
    return 0;
}