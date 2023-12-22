#include <stdio.h>

void hanoi(int, char, char, char);
void move(char, char);
int main()
{
    int n;
    printf("Please input n: ");
    scanf("%d", &n);
    hanoi(n, 'a', 'b', 'c');

    return 0;
}

// n个盘子，从x移动到z，用y作临时存放
void hanoi(int n, char x, char y, char z)
{
    if (n == 1)
        move(x, z);
    else
    {
        hanoi(n - 1, x, z, y);
        move(x, z);
        hanoi(n - 1, y, x, z);
    }
}

// 显示盘子移动的轨迹
void move(char c1, char c2)
{
    printf("%c -> %c\n", c1, c2);
}