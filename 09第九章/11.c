#include <stdio.h>
typedef struct student
{
    int num;
    double grade;
    struct student *next;
} student;

student *del(student *a, student *b)
{
    student *pre, *current, *head;
    head = a;

    while (b != NULL)
    {
        pre = head;
        current = head->next;
        if (pre->num == b->num)
        {
            pre->next = NULL;
            pre = current;
            current = current->next;
            head = pre;
        }
        else
        {
            while (pre->next != NULL)
            {
                if (current->num == b->num)
                {
                    pre->next = current->next;
                    break;
                }
                else
                {
                    pre = pre->next;
                    current = current->next;
                }
            }
        }
        b = b->next;
    }
    return head;
}

void printList(student *root)
{
    printf("-------\n");
    int i = 0;
    while (root != NULL)
    {
        printf("student %d -> %d -> %.2lf\n", i, root->num, root->grade);
        root = root->next;
        i++;
    }
}

int main()
{
    student a[3] = {{1, 79}, {4, 36}, {5, 79}};
    for (int i = 0; i < 2; i++)
    {
        a[i].next = &a[i + 1];
    }
    a[2].next = NULL;
    printf("����a:\n");
    printList(&a[0]);

    student b[2] = {{5, 38}, {4, 98}};
    for (int i = 0; i < 1; i++)
    {
        b[i].next = &b[i + 1];
    }
    b[1].next = NULL;
    printf("����b:\n");
    printList(&b[0]);
    student *combine = del(a, b);
    printf("ɾ��֮��:\n");
    while (combine != NULL)
    {
        printf("%d -> %.2lf\n", combine->num, combine->grade);
        combine = combine->next;
    }

    return 0;
}