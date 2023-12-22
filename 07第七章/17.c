#include <stdio.h>

void Convert(int n)
{
    int i;
    if ((i = n / 10) != 0)
        Convert(i);
    putchar(n % 10 + '0');
}

int main()
{
    int number;
    printf("input an integer:");
    scanf("%d", &number);
    printf("output: ");
    if (number < 0)
    {
        putchar('-');
        number = -number;
    }
    Convert(number);
    printf("\n");

    return 0;
}