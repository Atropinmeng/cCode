#include <stdio.h>
#include <math.h>
int main()
{
    double r, C1, S1, S2, V1, V2;
    double h;
    double pi = 3.14; // ����-1�ķ����Һ���ֵ,����3.141593

    printf("������Բ�İ뾶:");
    scanf("%f", &r);
    printf("������Բ���ĸ�:");
    scanf("%d", &h);

    C1 = 2 * pi * r;
    printf("Բ�ܳ�Ϊ:%2f\n", C1);
    S1 = pi * r * r;
    printf("Բ�����Ϊ:%.2f\n", S1);

    S2 = 4 * pi * r * r;
    printf("Բ��ı����Ϊ%.2f\n", S2);
    V1 = 3 / 4 * pi * r * r;
    printf("Բ������Ϊ:%.2f\n", V1);
    V2 = S1 * h;
    printf("Բ�����Ϊ:%.2f", V2);

    return 0;
}

// #include <stdio.h>
// int main()
// {
//     float h, r, l, s, sq, vq, vz;
//     float pi = 3.141526;
//     printf("������Բ�뾶r��Բ����h��");
//     scanf("%f %f", &r, &h);          // Ҫ������Բ�뾶r��Բ����h
//     l = 2 * pi * r;                  // ����Բ�ܳ�l
//     s = r * r * pi;                  // ����Բ���s
//     sq = 4 * pi * r * r;             // ����Բ������sq
//     vq = 3.0 / 4.0 * pi * r * r * r; // ����Բ�����vq
//     vz = pi * r * r * h;
//     // ����Բ�����vz
//     printf("Բ�ܳ�Ϊ:l=%6.2f\n", l);
//     printf("Բ���Ϊ: s=%6.2f\n", s);
//     printf("Բ������Ϊ:sq=%6.2f\n", sq);
//     printf("Բ�����Ϊ: v=%6.2f\n", vq);
//     printf("Բ�����Ϊ: vz=%6.2f\n", vz);
//     return 0;
// }