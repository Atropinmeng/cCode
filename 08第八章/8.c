#include <stdio.h>
#include <string.h>

int main()
{
    char buf[1024];
    printf("Please entr a string: ");
    gets(buf);
    int upper_count = 0, lower_count = 0, digit_count = 0, space_count = 0, other_count = 0;
    char *ptr = buf;
    while (*ptr != '\0')
    {
        if (*ptr >= 'A' && *ptr <= 'Z')
        {
            upper_count++;
        }
        else if (*ptr >= 'a' && *ptr <= 'z')
        {
            lower_count++;
        }
        else if (*ptr >= '0' && *ptr <= '9')
        {
            digit_count++;
        }
        else if (*ptr == ' ')
        {
            space_count++;
        }
        ptr++;
    }
    printf("upper:%d lower:%d; digit:%d; space:%d; other:%d\n", upper_count, lower_count, digit_count, space_count, other_count);

    return 0;
}