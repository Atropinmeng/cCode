#include <stdio.h>
#include <stdio.h>

typedef struct student
{
    int num;
    char sex[10];
    char name[100];
    int age;
    struct student *next;
} student;

void printList(student *root)
{
    printf("---------\n");
    while (root != NULL)
    {
        printf("num:%d, sex: %s, name: %s, age: %d\n", root->num, root->sex, root->name, root->age);
        root = root->next;
    }
}

int main()
{
    student a[] = {{1, "woman", "apple", 12}, {4, "woman", "banana", 36}, {5, "man", "candy", 79}, {5, "man", "danny", 36}, {4, "man", "enjoy", 98}};
    for (int i = 0; i < 4; i++)
    {
        a[i].next = &a[i + 1];
    }
    a[4].next = NULL;

    printList(&a[0]);

    int n;
    printf("请输入要删除的年龄:\n");
    scanf("%d", &n);
    student *pre = a, *current = a->next, *head;

    head = a;
    while (current != NULL)
    {
        if (head->age == n)
        {
            pre->next = NULL;
            pre = current;
            current = current->next;
        }
        else
        {
            if (current->age == n)
            {
                pre->next = current->next;
            }
            pre = current;
            current = current->next;
        }
    }
    printList(head);

    return 0;
}