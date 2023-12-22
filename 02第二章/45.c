#include <stdio.h>
int main()
{
    int n;
    printf("Please input a int n:");
    scanf("%d", &n);
    if (n % 3 == 0 && n % 5 == 0)
    {
        printf("n can be 3 and 5 zhengchu");
    }
    else
    {
        printf("n can't be 3 and 5 zhengchu");
    }

    return 0;
}