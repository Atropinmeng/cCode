#include <stdio.h>
int main()
{
    int a, b;
    float x, y;
    char c1, c2;
    scanf("a = %db = %d", &a, &b);
    scanf("%f%e", &x, &y);
    scanf("%c%c", &c1, &c2);

    printf("a = %db = %d\n", a, b);
    printf("%.1f  %.2f\n", x, y);
    printf("%c  %c", c1, c2);

    return 0;
}
