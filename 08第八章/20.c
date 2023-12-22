#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void sort(char *s[10])
{
    int i, j;
    for (i = 0; i < 10; i++)
    {
        for (j = i; j < 10; j++)
        {
            if (strcmp(s[i], s[j]) > 0)
            {
                char *tmp = s[i];
                s[i] = s[j];
                s[j] = tmp;
            }
        }
    }
}

int main()
{
    char *str[5];
    printf("Please enter five strings:\n");
    for (int i = 0; i < 5; i++)
    {
        str[i] = malloc(32);
        scanf("%s", str[i], 32);
    }
    sort(str);
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%s\n", str[i]);
        free(str[i]);
        return 0;
    }
}