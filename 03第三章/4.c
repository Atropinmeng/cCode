#include <stdio.h>
int main()
{
    // char c1, c2;
    // c1 = 97;
    // c2 = 98;
    // printf("c1 = %c,c2 = %c\n", c1, c2); // c1 = a,c2 = b
    // printf("c1 = %d,c2 = %d\n", c1, c2); // c1 = 97,c2 = 98

    // c1 = 197;
    // c2 = 198;
    // printf("c1 = %c,c2 = %c\n", c1, c2); // c1 = ?c2 = ?
    // printf("c1 = %d,c2 = %d\n", c1, c2); // c1 = -59,c2 = -58
    /*因为c1和c2为char类型，其保存的数据范围为-128~127，当c1=197,c2=198时，已经超出了char
     类型所能够保存的数据范围，此时会进行相应的转换为c1=-59,c2=-58，只是第一行以字符输出时，
     c1=-59,c2=-58为不可显示字符，所以输出了？,而第二行以整数输出时就进行了相应的整数显示*/

    int c1, c2;
    c1 = 97;
    c2 = 98;
    printf("c1 = %c,c2 = %c\n", c1, c2); // c1 = a,c2 = b
    printf("c1 = %d,c2 = %d\n", c1, c2); // c1 = 97,c2 = 98

    return 0;
}