#include <stdio.h>
#include <stdlib.h>

void *mynew(int n)
{
    return malloc(n);
}
void myfree(char *p)
{
    return free(p);
}
int main()
{
    int num;
    char *str = NULL;
    printf("please enter number: ");
    scanf("%d", &num);
    printf("before new p--%p:%s\n", str, str);
    str = (char *)mynew(num);
    printf("after new p--%p:%s\n", str, str);
    printf("Please enter a string:");
    scanf("%s", str, num);
    printf("before free p--%p:%s\n", str, str);
    myfree(str);
    printf("after free p--%p:%s\n", str, str);
    return 0;
}