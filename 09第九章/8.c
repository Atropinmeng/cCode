#include <stdio.h>
#include <stdlib.h>

typedef struct LNode
{
    int num;
    struct LNode *next;
} LNode;

void insert(int n, LNode *node)
{
    // �����½ڵ�
    LNode *newNode = (LNode *)malloc(sizeof(LNode));
    newNode->num = n;

    LNode *next = node->next;

    newNode->next = next;
    node->next = newNode;
}

LNode *creat(int n)
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

void printNode(LNode *head)
{
    LNode *p = head->next;
    while (p != NULL)
    {
        printf("num -> %d\n", p->num);
        p = p->next;
    }
}

int main()
{
    LNode *head;
    int n;
    head = creat(10);
    printNode(head);
    printf("��������Ҫ����Ľڵ�:\n");
    scanf("%d", &n);
    insert(n, head);
    printf("�����������:\n");
    printNode(head);
    return 0;
}