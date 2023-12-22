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

// n�����ӣ���x�ƶ���z����y����ʱ���
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

// ��ʾ�����ƶ��Ĺ켣
void move(char c1, char c2)
{
    printf("%c -> %c\n", c1, c2);
}