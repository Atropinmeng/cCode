#include <stdio.h>
#include <stdlib.h>
#define COUNT 5

typedef struct LNode
{
    int num;
    struct LNode *next;
} LNode;

LNode *create(int n)
{
    LNode *head, *p;
    head = (LNode *)malloc(sizeof(LNode));
    p = head;
    head->num = 0;
    head->next = NULL;
    for (int i = 1; i <= n; i++)
    {
        LNode *newNode = (LNode *)malloc(sizeof(LNode));
        newNode->num = i;
        newNode->next = NULL;
        p->next = newNode;
        p = p->next;
    }
    return head;
}

// 在指定位置插入数据
void insert(int n, int position, LNode *root)
{
    while (position--)
    {
        root = root->next;
    }
    LNode *newNode = (LNode *)malloc(sizeof(LNode));
    newNode->num = n;
    newNode->next = root->next;
    root->next = newNode;
}

void del(int n, LNode *root)
{
    LNode *pre;
    while (root->num != n)
    {
        pre = root;
        root = root->next;
    }
    pre->next = root->next;
}

void printList(LNode *root)
{
    printf("----------\n");
    int i = 0;
    while (root != NULL)
    {
        printf("node %d -> %d\n", i, root->num);
        root = root->next;
        i++;
    }
}

int main()
{
    int n, position;
    printf("请输入插入/删除的数，及插入的位置，位置最大为:%d\n", COUNT);
    scanf("%d %d", &n, &position);
    LNode *head = create(COUNT);
    printList(head->next);
    insert(n, position, head->next);
    printList(head->next);
    del(n, head->next);
    printList(head->next);
    return 0;
}