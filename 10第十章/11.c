#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int i;
    FILE *fp = fopen("tmp.txt", "w");
    char buf[1024] = {};

    while (fgets(buf, 1024, stdin) != NULL)
    {
        fputs(buf, fp);
        memset(buf, 0x00, sizeof(buf));
    }
    fclose(fp);

    fp = fopen("tmp.txt", "r");
    printf("ÊäÈë:");
    fgets(buf, 1024, fp);
    for (i = 0; buf[i] != '\0'; i++)
    {
        if (buf[i] >= 'a' && buf[i] <= 'z')
            printf("%c", buf[i] - 32);
        else
            printf("%c", buf[i]);
    }
    fclose(fp);
}