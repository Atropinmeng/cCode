#include <stdio.h>
#include <string.h>

int main()
{
    char buf1[1024], buf2[1024];
    printf("Please enter a string: ");
    scanf("%s", buf1, 1024);
    int m;
    printf("Please enter a location to start copying: ");
    scanf("%d", &m);
    if (m < 0 || m > strlen(buf1)) // ��������λ���Ƿ�Ϸ�
    {
        printf("Illegal location entered\n");
        return -1;
    }
    char *ptr1 = buf1 + m;
    char *ptr2 = buf2;
    while (*ptr1 != '\0')
    {
        *ptr2++ = *ptr1++;
    }
    *ptr2 = '\0'; // ��Ҫ�����ַ�����β��־
    printf("%s\n", buf2);
    return 0;
}