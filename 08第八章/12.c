#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void sort(char *s[10])
{
    int i, j;
    for (i = 0; i < 10; i++)
    {
        for (j = i; j < 10; j++)
            if (strcmp(s[i], s[j]) > 0)
            {
                char *tmp = s[i];
                s[i] = s[j];
                s[j] = tmp;
            }
    }
}

int main()
{
    char *str[10];
    printf("Please enter ten strings:\n");
    for (int i = 0; i < 10; i++)
    {
        str[i] = malloc(32);
        scanf("%s", str[i], 32);
    }
    sort(str);
    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%s\n", str[i]);
        free(str[i]);
    }
    return 0;
}