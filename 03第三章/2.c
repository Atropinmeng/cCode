#include <stdio.h>
#include <math.h>
int main()
{
    int money = 1000;
    float P;
    double r1 = 1000 * (1 + 5 * 0.03);
    double r2 = 1000 * (1 + 2 * 0.021) * (1 + 3 * 0.0275);
    double r3 = 1000 * (1 + 3 * 0.0275) * (1 + 2 * 0.021);
    double r4 = 1000 * pow(1 + 0.015, 5);
    double r5 = 1000 * pow(1 + 0.0035 / 4, 4 * 5);
    printf("r1 = %f\nr2 = %f\nr3 = %f\nr4 = %f\nr5 = %f", r1, r2, r3, r4, r5);
    return 0;
}