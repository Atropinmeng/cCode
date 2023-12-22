#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sort(int *s[], int len)
{
    int i, j;
    for (i = 0; i < len; i++)
    {
        for (j = i; j < len; j++)
        {
            if (*(s[i]) > *(s[j]))
            {
                int tmp = *(s[i]);
                *(s[i]) = *(s[j]);
                *(s[j]) = tmp;
            }
        }
    }
}

int main()
{
    int *integers;
    int count = 0;
    printf("Please enter the nubmer of count: ");
    scanf("%d", &count);
    integers = (int *)malloc(count * sizeof(int));
    int **p = (int **)malloc(count * sizeof(int *));
    printf("Please enter %d integers: \n", count);
    for (int i = 0; i < count; i++)
    {
        printf("%d ", integers[i]);
    }
    printf("\n");
    free(integers);
    free(p);
    return 0;
}